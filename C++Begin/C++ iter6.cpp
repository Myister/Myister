#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    int i;
    vector<int> a(11,0);
    auto b = a.begin();
    while(cin >>i)
    {//2
        ++*(b + i / 10 -1);
    }//2
    for (decltype(a.size()) c = 0; c < a.size();c++)
        cout << a[c]<<" ";
    getchar();
    getchar();
    return 0;
}//1