#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int b = 1;
    char p[10];
    char k[10];
    cout << "请输入两个不长于9位的字符串" << endl;
    cout << "请输入第一个字符串" << endl;
    for (char &a:p)
        cin >> &a;
    cout << "请输入第二个字符串" << endl;
    cin.clear();
    for(char &a:k)
        cin >> &a;
    b = strcmp(p, k);
    if(b==0)
        cout << "字符串相等" << endl;
    else
        cout << "字符串不相等" << endl;


    getchar();
    getchar();
    return 0;
}//1