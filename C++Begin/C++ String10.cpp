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
    cin >> a;
    for(char c:a)//对每个字符进行这个操作
     {
        cout << isalnum(c) << endl; //是字母或数字为这真
        cout << isalpha(c)<<endl;//是字母时为真
        cout << iscntrl(c)<<endl;//是控制字符为真
        cout<< isdigit(c)<<endl;//是数字时为真
        cout<< isgraph(c)<<endl;//不是空格但可打印时为真
        cout << islower(c) << endl;//是小写字母为真
        cout << isprint(c) << endl;//是可打印字符为真
        cout << ispunct(c) << endl;//c是标点符号时为真
        cout << isspace(c) << endl;//是空格为真
        cout << isupper(c) << endl;//是大写字母为真
        cout << isxdigit(c) << endl;//是十六进制数字为真
        cout << tolower(c) << endl;//是大写字母为真 并输出对应小写字母
        cout << toupper(c) << endl;//是小写字母为真 输出对应大写字母
    }//可以进行正确操作 但输出的真值不一定是1 ？
    getchar();
    getchar();
    return 0;
}
