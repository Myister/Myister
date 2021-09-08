#include<iostream>//sizeof
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int a[10] = {0, 1, 2, 3};
    int *k = a;
    int i=0;
    i = sizeof(k)/sizeof(*k);//对指针是指针本身所占空间大小
    cout << i << endl;
    i = sizeof(a) / sizeof(*a);//等同于对数组内每个数进行sizeof
    cout << i << endl;
    getchar();
    getchar();
    return 0;

}//1