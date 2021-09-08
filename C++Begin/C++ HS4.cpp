#include<iostream>//设定一个reset函数 作用于引用类型参数
using std::cin;
using std::cout;
using std::endl;
void reset(int &a)//重置为0
{//2
    a = 0;
}//2
int main()
{//1
    int k;
    cin >> k;
    reset(k);
    cout << k << endl;
    getchar();
    getchar();
    return 0;
}//1