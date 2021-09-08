#include<iostream>//指针初始化问题
int main()
{
    int *p;
    *p = 1;//指针可以不初始化 但这个编译并不能通过 指针不知道指向哪里 无法使用
    return 0;
}