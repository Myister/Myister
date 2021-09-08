#include<iostream>//判断一个数是偶数还是奇数
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int i;
    cin >> i;
    if(!(i%2))//注意括号
        cout << "是偶数" << endl;
    else
        cout << "是奇数" << endl;
    getchar();
    getchar();
    return 0;
}//1