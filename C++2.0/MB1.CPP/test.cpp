#include<iostream>//用模板求最小值
using std::cin;
using std::cout;
using std::endl;
#include"minimum.h"

int main()
{
    cout << "请输入三个整数" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    cout << "最小值为" << minimum(a, b, c) << endl;
    cout << "请输入三个小数" << endl;
    double e, d, f;
    cin >> e >> d >> f;
    cout << "最小值为" << minimum(e, d, f) << endl;
    getchar();
    getchar();
    return 0;
}