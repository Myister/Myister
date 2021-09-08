#include<iostream>
#include"Sales_item.h"//非官方库 双引号
int main()
{
    Sales_item book;
    std::cin >> book;//ISBN 号  数量 价格
    std::cout << book << std::endl;
    getchar();
    getchar();
    return 0;
}