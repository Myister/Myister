#include<iostream>//const_cast 用法
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    const int v = 0;//const int volatile 可显示正确结果  详细 https://blog.csdn.net/nishisiyuetian/article/details/79763054
    int *p = const_cast<int *>(&v);
    cout << v << endl;
    cout << *p << endl;
    *p = 1;
    cout << *p << endl;
    cout << v << endl;
    getchar();
    getchar();
    return 0;

}//1