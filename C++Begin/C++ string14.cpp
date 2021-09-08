#include<iostream>//输入字符串 把所有字符换成X
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{//1
    int i;
    string a;
    cin >> a;
    for (i = 0; i < a.size(); i++)
        a[i] = 'X';
    cout << a << endl;
    getchar();
    getchar();
    return 0;
}//1