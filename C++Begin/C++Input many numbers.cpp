#include<iostream>//连续输入多个并计算结果 ctrl+z 输入结束符 回车查看结果
int main()
{
    int sum = 0,a=0;
    while(std::cin >> a)//连续输入直到输入到无关的东西
            sum += a;
            std::cout << "sum is " << sum << std::endl;
            return 0;
}