#include<iostream>
int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;//i= 42*42
    std::cout << *p1  << std::endl;//输出的是42*42   *p1 乘以 *p1
    std::cout << i << std::endl;//输出1764  42*42
    if(p1)
        std::cout << 1 << std::endl;//p1地址  不为0为真
    else
        std::cout << 0 << std::endl;
    if(*p1)
        std::cout << 2 << std::endl;//i的值 不为0为真
    else
        std::cout << 3 << std::endl;//若i为0 则输出3
    getchar();
    getchar();
    return 0;
}