#include<iostream>//用for输入数组并输出
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    char k[10];
    for(char &a:k)
        cin >> &a;
    for(char a:k)
        cout << a;
    getchar();
    getchar();
    return 0;
}//1