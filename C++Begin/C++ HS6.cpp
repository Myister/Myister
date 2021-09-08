#include<iostream>//判断string中是否有大写字母 
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
bool check(const string &a)//布尔类型 返回true false
{//2
    for (char c:a)
        if(isupper(c))
            return true;
    return false;
}//2
int main()
{//1
    string b;
    cin >> b;
    cout << check(b) << endl;
    getchar();
    getchar();
    return 0;
}//1