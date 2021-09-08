#include<iostream>
struct Sales_item
{
    int book = 0;
    int price = 0;
};
int main()
{
    Sales_item book1;
    std::cin >> book1.price;
    std::cout << book1.price << std::endl;
    getchar();
    getchar();
    return 0;
}