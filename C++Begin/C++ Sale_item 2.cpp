#include<iostream>//输入俩 ISBN相同的书  数据加起来  
#include"Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;//ISBN 号  数量 价格
    std::cout << item1 + item2 << std::endl;
    getchar();
    getchar();
    return 0;
}