#include<iostream>//数组拷贝
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10];
    for (int k = 0; k <= 9;k++)
        b[k] = a[k];
    for (int k = 0; k <= 9;k++)
        cout << b[k] << endl;
    getchar();
    getchar();
    return 0;
}