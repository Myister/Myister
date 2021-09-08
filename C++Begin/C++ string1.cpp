#include<iostream>//一些string的基本功能
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int b,d;
    string a,c;//默认为空
    cin >> a >>c;
    b = a.empty();//判断是否为空
    cout << b << endl;
    if(a==c)
        cout << " same " << endl;
    else
        cout << " different " << endl;
    d = a.size();
    cout << d << endl;
    cout << a[3] << endl;//a[]由0 开始 返回第N个数
    c = a;//将a的副本给b
    cout << c << endl;
    getchar();
    getchar();
    return 0;
}