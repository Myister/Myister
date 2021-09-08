#include<iostream>//使二维数组每个值+1 并输出
using std::cin;
using std::cout;
using std::endl;
typedef int DW[2][3];
int main()
{//1
    DW a = {{0, 1, 2}, {3, 4, 5}};
    for(auto &b:a)
    for(auto &c:b)
        {//2    
        c++;
        cout << c << endl;
        }//2
    getchar();
    getchar();
    return 0;
}//1