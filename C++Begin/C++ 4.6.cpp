#include<iostream>//test 注意一些优先级问题
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int p;
    if(p=3!=3)//p=0 为2   p=1 为1    p=0!=1 为1  是因为0!=1 结果为1 p=1  改成别的数结果就不同了  两个3输出为1！
        cout << "1" << endl;
        else
    cout<<"2"<<endl;
        return 0;
}