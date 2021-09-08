#include<iostream>//两数组是否相等 注意cin.clear()的运用
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    int i = 0;
    vector<int> a;
    vector<int> b;
    cout << "输入第一个数组" << endl;
    while(cin>>i)
        a.push_back(i);
    cout<<"输入第二个数组"<<endl;
    cin.clear();//因为输入Ctrl+z 流处于混乱状态 需恢复
    while (cin >> i)
        b.push_back(i);
    decltype(a.size()) k = 0;
    if(a.size()!=b.size())
        cout << "数组不相等" << endl;
    else
    {//2
        for (decltype(a.size()) c = 0; c < a.size();c++)
        if(a[c]==b[c])
            k++;
    if(k==a.size())
        cout << "数组相等" << endl;
    else
        cout << "数组不相等" << endl;
    }//2
    getchar();
    getchar();
    return 0;
}//1