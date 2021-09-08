#include<iostream>//编写一段程序 判断俩数组是否相等
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int k = 0;
    int a[5];
    int b[5];
    for (int i = 0; i <= 4;i++)
        cin >> a[i];
    for (int i = 0; i <= 4;i++)
        cin >> b[i];
    for (int i = 0; i <= 4;i++)
       {//2 
       if(a[i]==b[i])
            {//3
            cout << "第" << i+1 << "个数相等" << endl;
            k++;
            }//3

            else cout << "第" << i + 1 << "个数不相等" << endl;
       }//2
       if(k==5)
           cout << "两数组相等" << endl;
        else
            cout << "两数组不相等" << endl;
       getchar();
       getchar();
       return 0;
}//1