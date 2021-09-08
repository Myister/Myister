#include<iostream>//一些值的输出
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int i;
    double k;
    k = i = 3.5;
    cout << k << " " << i << endl;
    i = k = 3.5;
    cout << k << " " << i << endl;
    getchar();
    getchar();
    return 0;
}