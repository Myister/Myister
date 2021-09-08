#include<iostream>//调用函数 计算输入数值的阶乘  并融入报错try语块
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int JC(int a)
{//1
    int k=1;
    for (int i = 1; i <= a;i++)
       k*=i;
    return k;
}//1
int main()
{//2
    int i=0,z=0;
    try
    {//3
        cin >> i;
        if (!cin>>i)
            throw runtime_error("请输入数字");//抛出错误
        z = JC(i);
        cout<< z <<endl;
        getchar();
        getchar();
    }//3
    catch(runtime_error err)
    {//4
        cout << err.what() << endl;
        getchar();
        getchar();
        return -1;

    }//4
    return 0;
}//2