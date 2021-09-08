#include<iostream>//输入两数利用函数进行交换
using std::cin;
using std::cout;
using std::endl;
void exchange(int &a,int &b)//交换函数 利用引用
{//2
    int k;
    k = a;
    a = b;
    b = k;
}//2
int main()
{//1
    int c, d;
    cin >> c >> d;
    exchange(c, d);
    cout << c << endl;
    cout << d << endl;
    getchar();
    getchar();
    return 0;
}//1