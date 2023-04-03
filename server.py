from socket import *
from sqlite3 import connect
import threading
from datetime import *

# 时间格式声明，用于后面的记录系统时间
ISOTIMEFORMAT = '%Y-%m-%d %H:%M:%S'

# 设置IP地址和端口号
IP = '127.1.1.1'
PORT = 30000

# 用户列表和套接字列表，用于后面给每个套接字发送信息
user_list = []
socket_list = []

# 聊天记录存储至当前目录下的serverlog.txt文件中
try:
    with open('serverlog.txt', 'a+') as serverlog:
        curtime = datetime.now().strftime(ISOTIMEFORMAT)
        serverlog.write('\n\n-----------服务器打开时间：' + str(curtime) + '，开始记录聊天-----------\n')
except:
    print('ERROR!')

# 读取套接字连接
s = socket()
s.bind((IP, PORT))
s.listen()


def read_client(s, nickname):
    try:
        return s.recv(2048).decode('utf-8')  # 获取此套接字（用户）发送的消息
    except:  # 一旦断开连接则记录log以及向其他套接字发送相关信息
        curtime = datetime.now().strftime(ISOTIMEFORMAT)  # 获取当前时间
        print(curtime)
        print(nickname + ' 离开了聊天室!')
        with open('serverlog.txt', 'a+') as serverlog:  # log记录
            serverlog.write(str(curtime) + '  ' + nickname + ' 离开了聊天室!\n')
        socket_list.remove(s)
        user_list.remove(nickname)
        for client in socket_list:  # 其他套接字通知（即通知其他聊天窗口）
            client.send(('系统消息：' + nickname + ' 离开了聊天室!').encode('utf-8'))


# 接收Client端消息并发送
def socket_target(s, nickname):
    try:
        s.send((','.join(user_list)).encode('utf-8'))  # 将用户列表送给各个套接字，用逗号隔开
        while True:
            content = read_client(s, nickname)  # 获取用户发送的消息
            if content is None:
                break
            else:
                curtime = datetime.now().strftime(ISOTIMEFORMAT)  # 系统时间打印
                print(curtime)
                print(nickname + '说：' + content)
                with open('serverlog.txt', 'a+') as serverlog:  # log记录
                    serverlog.write(str(curtime) + '  ' + nickname + '说：' + content + '\n')
                for client in socket_list:  # 其他套接字通知
                    client.send((nickname + '说:' + content).encode('utf-8'))
    except:
        print('Error!')


while True:  # 不断接受新的套接字进来，实现“多人”
    conn, addr = s.accept()  # 获取套接字与此套接字的地址
    socket_list.append(conn)  # 套接字列表更新
    nickname = conn.recv(2048).decode('utf-8')  # 接受昵称

    if nickname in user_list:  # 昵称查重，相同则在后面加上数字
        i = 1
        while True:
            if nickname + str(i) in user_list:
                i = i + 1
            else:
                nickname = nickname + str(i)
                break

    user_list.append(nickname)  # 用户列表更新，加入新用户（新的套接字）
    curtime = datetime.now().strftime(ISOTIMEFORMAT)
    print(curtime)
    print(nickname + ' 进入了聊天室!')

    with open('serverlog.txt', 'a+') as serverlog:  # log记录
        serverlog.write(str(curtime) + '  ' + nickname + ' 进入了聊天室!\n')

    for client in socket_list[0:len(socket_list) - 1]:  # 其他套接字通知
        client.send(('系统消息：' + nickname + ' 进入了聊天室！').encode('utf-8'))

    # 加入线程中跑，加入函数为socket_target，参数为conn,nickname
    threading.Thread(target=socket_target, args=(conn, nickname,)).start()