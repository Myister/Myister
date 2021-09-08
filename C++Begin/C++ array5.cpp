#include<iostream>//用string风格比较俩字符串
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{//1
    cout << "输入第一个字符串" << endl;
    string a;
    string b;
    cin >> a;
    cout << "输入第二个字符串" << endl;
    cin >> b;
    if(a==b)
        cout << "相等"<<endl;
        else
            cout << "不等"<< endl;
        getchar();
        getchar();

}//1