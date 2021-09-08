#include<iostream>//用for语句循环输出ia
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
int main()
{//1
    int ia[4] = {0, 1, 2, 3};
    for(int i:ia)
        cout << i << endl;
    getchar();
    getchar();
    return 0;

}//1