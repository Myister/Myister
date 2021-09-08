#include<iostream>//用指针把一个数组的数全变成0
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    for (int *k=a+5;p!=k;p++)
        *p = 0;
    for (int i = 0; i <= 4;i++)
        cout << a[i] << endl;
    getchar();
    getchar();
    return 0;

}//1