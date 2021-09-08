#include<iostream>//每次读入一行 遇到换行符返回
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string line;
    while(getline(cin,line))
        cout << line << endl;
    return 0;
}