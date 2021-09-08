#include<iostream>//用vector 初始化数组
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    int k;
    int a[10];
    vector<int> b;
    while(cin >>k)
        b.push_back(k);
    for(decltype(b.size())c=0;c<b.size();++c)
        a[c] = b[c];
    for (int c:b)
        cout << c;
    getchar();
    getchar();
    return 0;
}//1