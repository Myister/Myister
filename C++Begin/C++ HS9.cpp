#include<iostream>//交换两个int指针
using std::cin;
using std::cout;
using std::endl;
using std::string;
void exchange(int *a,int *b)
{//2

    int *k = 0;
    k = a;
    a = b;
    b = k;
}//1
int main()
{//1
    int c, d;
    int *p = &c, *q = &d;
    cin >> c, d;
    return 0;
}//1