#include<iostream>//用数组初始化vector
#include<vector>
#include<iterator>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;
int main()
{//1
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>b (begin(a), end(a));//begin end 要using 
    for (int i:b)
        cout << i;
    getchar();
    getchar();
    return 0;
}//1