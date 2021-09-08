#include<iostream>//用指针和begin end输出二维数组 注意解引用
#include<iterator>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
int main()
{//1
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    for (auto b = begin(a); b != end(a);b++)
        for (auto c = begin(*b); c != end(*b);c++)//注意解引用
        
            cout << *c << endl;
    getchar();
    getchar();
    return 0;
}//1