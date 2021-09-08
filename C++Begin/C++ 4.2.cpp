#include<iostream>//输入数 直到42
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int i;
    while(cin>>i)
    {//2
        if(i==42)
        {
            cout << "找到42" << endl;
            getchar();
            getchar();
            return 0;
        }
    else
        cout << "没有42" << endl;
    }//2
    getchar();
    getchar();
    return 0;
}//1