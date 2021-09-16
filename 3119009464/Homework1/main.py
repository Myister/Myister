import jieba
import re
from math import sqrt
import os


def read_file(path1,path2,path3):
    file_words = {}
    ignore_list = [u'的',u'了',u'和',u'呢',u'啊',u'哦',u'恩',u'嗯',u'吧'];
    accepted_chars = re.compile(r"[\u4E00-\u9FA5]+")
    file_object = open(path1,encoding='utf-8')
    try:
        all_the_text = file_object.read()
        seg_list = jieba.cut(all_the_text, cut_all=True)
        for s in seg_list:
            if accepted_chars.match(s) and s not in ignore_list:
                if s not in file_words.keys():
                    file_words[s] = [1,0]
                else:
                    file_words[s][0] += 1
    finally:
        file_object.close()
        file_object2 = open(path2,encoding='utf-8')

    try:
        all_the_text = file_object2.read()
        seg_list = jieba.cut(all_the_text, cut_all=True)
        for s in seg_list:
            if accepted_chars.match(s) and s not in ignore_list:
                if s not in file_words.keys():
                    file_words[s] = [0,1]
                else:
                    file_words[s][1] += 1
    finally:
        file_object2.close()
        sum_2 = 0
        sum_file1 = 0
        sum_file2 = 0
        for word in file_words.values():
            sum_2 += word[0]*word[1]
            sum_file1 += word[0]**2
            sum_file2 += word[1]**2
        rate = sum_2/(sqrt(sum_file1*sum_file2))
        f = open(path3, 'w', encoding="utf-8")
        f.write("文章相似度： %.2f" % rate)
        f.close()
        return rate

def main_test():
    size1 = os.path.getsize('D:\PythonCode\Code1\.txt')
    size2 = os.path.getsize('D:\PythonCode\Code1\orig_0.8_dis_15.txt')

    if size1 == 0:
        print('原文件是空的')
        return 0
    elif size2 == 0:
        print('对比文件为空')
        return 0
    else:
        result=round(read_file('D:\PythonCode\Code1\orig.txt','D:\PythonCode\Code1\orig_0.8_dis_15.txt','D:\PythonCode\Code1\JG.txt'),2)
    return result
if __name__ == '__main__':
    main_test()






