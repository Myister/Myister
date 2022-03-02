#include<string>
using std::string;
class Emloyee//工资
{
    public:
    Emloyee(string a,string b,int c)
    {
        setname(a);
        setsurname(b);
        setsalary(c);
    }
    void setname(string);
    void setsurname(string);
    void setsalary(int);
    string getname();
    string getsurname();
    int getsalary();

private:
    string name;
    string surname;
    int salary;
};//End