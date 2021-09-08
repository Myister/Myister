#include<iostream>
using std::cout;
using std::endl;
#ifndef CHAPTER6_H;//防止重复定义的玩意
#define CHAPTER6_H ;
int test(int k)
{//2
    static int a=1;//形参 用static初始化  则可以保存至程序运行完毕
    if(k!=0)
        ++a;
    cout <<"程序执行了" << a <<"次"<< endl;
}//2
#endif