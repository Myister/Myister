#include<iostream>
#include"Sales_data.h"
int main()
{
    Sales_data book1,book2;
    double total = 0.0;
    std::cout << "plase input the information of two books 分别输入 ISBN 数量 单价" << std::endl;
    std::cin >> book1.bookNo >> book1.units_sold >> book1.price; //读入第一本书的信息
    std::cin >> book2.bookNo >> book2.units_sold >>book2.price; //读入第二本书的信息
    if(book1.bookNo==book2.bookNo)
        {
            total = book1.units_sold * book1.price + book2.units_sold * book2.price;
            std::cout << "your total sales is " << total << std::endl;//输出价格
        }
        else
            std::cerr << " different isbn 请重新输入 " << std::endl;//报错
        getchar();
        getchar();
        return 0;
}