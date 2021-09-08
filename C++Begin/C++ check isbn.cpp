#include<iostream>//输入两书本信息 检测isbn是否相同
#include"Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if(item1.isbn()==item2.isbn())//isbn 是否相同
    {
        std::cout << item1 + item2 << std::endl;
        getchar();
        getchar();
        return 0;
    }
    else
    {
        std::cerr << "different ibsn" << std::endl;
        getchar();
        getchar();
        return -1;
    }

}