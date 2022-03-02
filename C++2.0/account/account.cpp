#include"account.h"

void Account::credit(int b)//存钱函数
{
    money = money + b;
}

void Account::debit(int c)//取钱函数
{
    if(c<=money)
        money = money - c;
    else
        cout << "输入金额大于余额" << endl;
}

void Account::getBalance()
{
    cout << "余额："<< money << endl;
}
        
void Account::getmoney(int a)
        {
            if(a>0)
            money = a;
            else
            {
                money = 0;
                cout << "输入的钱为非法数值" << endl;
            }
        }

int main()
{
    Account ac1(100);
    cout << "ac1 100余额测试" << endl;
    ac1.getBalance();
    ac1.credit(200);
    ac1.getBalance();
    ac1.debit(500);
    ac1.getBalance();
    ac1.debit(200);
    ac1.getBalance();
    getchar();
    getchar();
    return 0;
}