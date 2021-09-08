#include<iostream>//用指针输出数组
using std::cout;
using std::endl;
int main()
{//1
    int ia[4] = {0, 1, 2, 3};
    for (int *p = ia; p != ia + 4;p++)
        cout << *p << endl;
    getchar();
    getchar();
    return 0;

}//1