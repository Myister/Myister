#include<iostream>//使用vector 实现类似数组拷贝功能
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> a{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b(10, 0);
    for (int k = 0; k <= 9;k++)
        b[k] = a[k];
    for (int k = 0; k <= 9;k++)
        cout << b[k] << endl;
    getchar();
    getchar();
    return 0;
}