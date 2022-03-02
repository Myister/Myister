#include<iostream>//vscode 不能实现类的接口与实现 故都放在account.cpp中
using std::cout;
using std::endl;
#include"account.h"

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