#include<iostream>//输入两个数 输出两个数范围内的数
int main()
{
    int a = 0, b = 0;
    std::cout << "Please input 2 numbers a>b" << std::endl;
    std::cin >> a >> b;
    while(a>=b)
    {
        std::cout << b << std::endl;
        ++b;
    }
    return 0;
}