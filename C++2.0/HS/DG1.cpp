#include<iostream>//5！=5*4！  4！=4*3！  3！=3*2！ 2！=2*1！ 1!=1
using std::cin;
using std::cout;
using std::endl;

int dg(int);//递归计算阶乘

int dg(int a)
{
    if(a==1)
        return 1;
    else
        return a * dg(a-1);
}

int main()
{
    int b = 0;
    cout << "输入阶乘的值" << endl;
    cin >> b;
    cout << dg(b) << endl;
    getchar();
    getchar();
    return 0;
}