#include<iostream>//输入两个数 输出两个数之间的数
int main()
{
    int a=0, b=0;
    std::cout << "please input 2 numbers " << std::endl;
    std::cin >> a >> b;
    if(a>b)
        for (; a >= b;b++)//满足a>=b 则继续输出
        std::cout << b << std::endl;
        
    else
        for (; a <=b;a++)//a<=b 则继续输出
            std::cout << a << std::endl;
    getchar();
    getchar();
    return 0;
}