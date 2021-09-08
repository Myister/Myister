#include<iostream>//字面值和string对象的一些运用
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s1(10, 'a');
    string s2 = s1 + "hello" + ","; //s2 = "hello" + ","+ s1; 则报错  s1必须在前面
    cout << s2 << endl;
    getchar();
    getchar();
    return 0;
}