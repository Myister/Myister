#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name;//姓名
    string address;//地址
    string back1() const { return name; }
    string back2() const { return address; }
};

int main()
{
    Person Person1;
    cout << "输入名字 地址" << endl;
    cin >> Person1.name >> Person1.address;
    cout << Person1.back1() << endl;
    cout << Person1.back2() << endl;
    getchar();
    getchar();
    return 0;
}

