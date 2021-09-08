#include<iostream>
int main()
{
    int currVal = 0, val = 0;
    if(std::cin>>currVal)//输入的是数就为真 直接以下代码
    {
        int cnt = 1;//第一个数出现第一次
        while(std::cin>>val)//开始输入 每个数都循环下列过程 如果为 1 1 1 2 3 4 有连续的相同数值 则输出3 times 若为分开的相同数字则分开输出1 times
        {
        if(val==currVal)//如果输入的数和第一个相同
            ++cnt;//计数
            else
            {
                std::cout<<currVal<<" occurs "<< cnt << " times"<<std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout  << currVal << " occurs " << cnt << " times" << std::endl;
    }
    getchar();
    getchar();
    return 0;
}