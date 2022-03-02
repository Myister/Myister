#include<iostream>
using std::cout;
using std::endl;
class Account//银行账户类
{//1
    private:
        int money = 0;

    public:
        Account() = default;
        Account(int money)
        {
            getmoney(money);
        }
        void getmoney(int);
        void debit(int);
        void credit(int);
        void getBalance();
};// 1
