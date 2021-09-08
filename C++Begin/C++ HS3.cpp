#include<iostream>//用static 记录程序运算次数 调用自己的头文件
#include"chapter6.h"
using std::cin;
using std::cout;
using std::endl;
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


