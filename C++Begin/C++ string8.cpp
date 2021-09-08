#include<iostream>//输入字符串 连在一起
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string line,temp;
    while (cin >> line)
        temp += line;
    cout << temp << endl;
    getchar();
    getchar();
    return 0;

}