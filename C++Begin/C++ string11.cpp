#include<iostream>//例子  输入一个字符串 计算其中的小写字母
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int b;
    string a;
    cin >> a;
    for(char c:a)
    if(islower(c))
        b++;
    cout << "有" << b << "个小写字母" << endl;
    getchar();
    getchar();
    return 0;
}