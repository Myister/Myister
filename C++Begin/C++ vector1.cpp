#include<iostream>//比较两种 vector初始化 并且输出其数量和vector中的内容
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int>a(10, 42);//10 个42
    vector<int> b{10, 42}; //10和42  注意符号
    int c, d;//用于存放两个size
    c = a.size();
    d = b.size();
    for(int i:a)
    cout << i << endl;
    for(int i:b)
    cout << i <<endl;
    cout << c << endl;
    cout << d << endl;
    getchar();
    getchar();
}