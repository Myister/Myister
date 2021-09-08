#include<iostream>//getline会读取空格 string类输入运算不会
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string line;
    while (getline(cin, line))
    cout << line << endl;
    return 0;
    ;
}