#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"Emloyee.h"

void Emloyee::setname(string a)
{
    name = a;
}

void Emloyee::setsurname(string b)
{
    surname = b;
}

void Emloyee::setsalary(int c)
{
    salary = c;
}

string Emloyee::getname() { return name; }//返回名
string Emloyee::getsurname() { return surname; }//返回姓
int Emloyee::getsalary() { return salary; }//返回工资

int main()
{
    string n1, n2, sn1, sn2;
    int s1, s2;
    cout << "请输入第一个雇员的名字 姓  工资" << endl;
    cin >> n1 >> sn1 >> s1;
    cout << "请输入第二个雇员的名字 姓  工资" << endl;
    cin >> n2 >> sn2 >> s2;
    Emloyee E1(n1, sn1, s1);//雇员1
    Emloyee E2(n2, sn2, s2);//雇员2
    cout << E1.getname() << endl;
    cout << E1.getsurname() << endl;
    cout << E1.getsalary() << endl;
    cout << E2.getname() << endl;
    cout << E2.getsurname() << endl;
    cout << E2.getsalary() << endl;
    E1.setsalary(s1 * 1.6);
     cout << E1.getsalary() << endl;
    getchar();
    getchar();
    return 0;
}