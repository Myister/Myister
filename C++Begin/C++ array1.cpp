#include<iostream>//初始化数字 下表和数字相同
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int k = 0; k <= 9;k++)
        cout << a[k] << endl;
    getchar();
    getchar();
    return 0;
}