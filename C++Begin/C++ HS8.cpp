#include<iostream>//比较两个数 传一个指针和一个int到compare函数 返回较大值输出
using std::cin;
using std::cout;
using std::endl;
using std::string;
int compare(int *a,int &b)
{//2
if(*a>b)
    return *a;
    else
        return b;
}//2
int main()
{//1
    int k = 0, i = 0,z=0;
    int *p = &k;
    cin >> k >> i;
    z = compare(p, i);
    cout << z << endl;
    getchar();
    getchar();
    return 0;
}//1