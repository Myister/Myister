#include<iostream>//输入string 将其全部改为小写字母0
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
void change(string &a)
{//2
for(auto &b:a)
    b = tolower(b);
}//2
int main()
{//1
    string c;
    cin >> c;
    change(c);
    cout << c;
    getchar();
    getchar();
    return 0;
}//1