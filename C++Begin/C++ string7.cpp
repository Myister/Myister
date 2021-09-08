#include<iostream>//如果字符串不等长输出长的那个
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string a, b;
    int length1,length2;
    cin >> a >> b;
    length1 = a.size();
    length2 = b.size();
    if(length1>length2)
        cout << a << endl;
    else
        cout << b << endl;
    getchar();
    getchar();
    return 0;
}