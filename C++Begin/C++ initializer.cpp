#include<iostream>//可变传入参数数量的函数
using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
void acc(initializer_list<int> d)//initializer_list 是const
{//2
    int sum = 0;
    for (auto b = d.begin(); b != d.end();++b)
        sum += *b;
        cout << sum << endl;
}//2
int main()
{//1
    acc({1,2,3,4,5});
    getchar();
    getchar();
    return 0;
}//1