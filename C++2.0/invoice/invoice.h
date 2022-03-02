#include<iostream>//类成员函数的定义和声明不能在一个class里
#include<string>
using std::cout;
using std::endl;
using std::string;
class Invoice//发票
{
 private:
     string id;//零件号
     string ms;//零件描述
     int number;//数量
     int price;//单价
 public:
     Invoice() = default;
     Invoice(string a, string b,int c,int d)
     {
         setid(a);
         setms(b);
         setnumber(c);
         setprice(d);
     }
     void setid(string);
     void setms(string);
     void setnumber(int);
     void setprice(int);
     void getid();
     void getms();
     void getnumber();
     void getprice();
     int getInvoiceAmount();

};