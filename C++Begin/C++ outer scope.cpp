#include<iostream>
int a = 1;
int main()
{
    std::cout << a << std::endl;
    int a = 0;
    std::cout << a << std::endl;//在内层作用域重新定义
    std::cout << ::a << std::endl;//注意：： 显式访问全局变量a
    getchar();
    getchar();
    return 0;
}