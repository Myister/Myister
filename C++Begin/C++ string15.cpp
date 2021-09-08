#include<iostream>//输入字符串 删除标点符号 
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
    for(int i = 0;i<a.size();i++)
    if(ispunct(a[i]))
    a[i] = '\0';
    cout << a << endl;
    getchar();
    getchar();
    return 0;
}