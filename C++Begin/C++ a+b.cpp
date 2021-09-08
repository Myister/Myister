#include<iostream>//输入两个数做加法 C++实现
int main()
{
    std::cout << "Enter two numbers:";
    std::cout << std::endl;//结束当前行
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The Sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}