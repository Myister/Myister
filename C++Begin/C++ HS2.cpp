#include<iostream>//用static 记录程序运算次数
using std::cin;
using std::cout;
using std::endl;
int test(int k)
{//2
    static int a=1;//形参 用static初始化  则可以保存至程序运行完毕
    if(k!=0)
        ++a;
    cout <<"程序执行了" << a <<"次"<< endl;
}//2
int main()
{//1
    int z=0;
    cout << "你想程序执行的次数" << endl;
    cin >> z;
    for (int k = 0; k < z;k++)
        test(k);
    getchar();
    getchar();
    return 0;
}//1








