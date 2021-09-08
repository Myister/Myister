#include<iostream>//输入一串字符串 改为大写输出
#include<vector>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{//1
    string a;
    while(cin >> a)
        for (auto b = a.begin(); b != a.end();b++)
        {//2
            if(islower(*b))
                *b = toupper(*b);
            cout << *b;
        }//2
    getchar();
    getchar();
    return 0;
}//1