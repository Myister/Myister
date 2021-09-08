#include<iostream>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string a;
    int i,k;
    cin >> a;
    k = a.size();
     for (i = 0;i<k;i++)
    {
        cout << isalnum(a[i]) << endl; //是字母或数字为这真
        cout << isalpha(a[i])<<endl;//是字母时为真
        cout << iscntrl(a[i])<<endl;//是控制字符为真
        cout<< isdigit(a[i])<<endl;//是数字时为真
        cout<< isgraph(a[i])<<endl;//不是空格但可打印时为真
        cout << islower(a[i]) << endl;//是小写字母为真
        cout << isprint(a[i]) << endl;//是可打印字符为真
        cout << ispunct(a[i]) << endl;//c是标点符号时为真
        cout << isspace(a[i]) << endl;//是空格为真
        cout << isupper(a[i]) << endl;//是大写字母为真
        cout << isxdigit(a[i]) << endl;//是十六进制数字为真
        cout << tolower(a[i]) << endl;//是大写字母为真 并输出对应小写字母
        cout << toupper(a[i]) << endl;//是小写字母为真 输出对应大写字母
    }//可以进行正确操作 但输出的真值不一定是1 ？
    getchar();
    getchar();
    return 0;
}