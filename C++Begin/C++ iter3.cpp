#include<iostream>//输入几个数 放进vector 每个*2 输出
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    vector<int> a;
    int i;
    while(cin>>i)
        a.push_back(i);
    for (auto b = a.begin(); b != a.end();++b)
    {//2
        *b = *b * 2;
        cout << *b << endl;
    }//2
    getchar();
    getchar();
    return 0;

}//1