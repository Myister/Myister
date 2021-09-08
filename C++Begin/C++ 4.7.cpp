#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
int a[4] = {1, 2, 3};
    int *p = a;
    cout << *++p << endl;
    cout << *p++ << endl;
    return 0;
}//1