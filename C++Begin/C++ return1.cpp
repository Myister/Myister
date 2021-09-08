#include<iostream>//设计一个递归函数输出vector
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
static int d = 0;
void out(const vector<int> a,const int k)
{//2
    if(d!=k)
    {//3
     cout << a[d++] << endl;
    return out(a, k);
    }//3
}//2
int main() 
{//1
    vector<int> b = {1, 2, 3, 4, 5};
    decltype(b.size()) c=b.size();
    out(b,c);
    getchar();
    getchar();
    return 0;
}//1