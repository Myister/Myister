#include<iostream>//读取未知数量string
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string word;
    while(cin >> word)
        cout << word << endl;
    return 0;
}