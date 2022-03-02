#include<iostream>
using std::cout;
using std::endl;

#include"invoice.h"
  void Invoice::setid(string a)
     {
         id = a;
    }
    void Invoice::setms(string b)
    {
        ms = b;
    }
    void Invoice::setnumber(int c)
    {
        number = c;
    }
    void Invoice::setprice(int d)
    {
        price = d;
    }

    void Invoice::getid() { cout << id << endl; }
    void Invoice::getms() { cout << ms << endl; }
    void Invoice::getnumber() { cout << number << endl; }
    void Invoice::getprice() {cout << price << endl;}
    int Invoice::getInvoiceAmount()
    {
        return number * price;
    }
int main()
{
    Invoice In1("A-1", "op", 10, 100);
    In1.getid();
    In1.getms();
    In1.getnumber();
    In1.getprice();
    In1.getInvoiceAmount();
    getchar();
    getchar();
    return 0;
}