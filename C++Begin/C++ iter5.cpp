#include<iostream>//输入一组数到vector 输出第一个和最后一个数的和 以此类推
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
int i = 0, sum = 0,k=0; //存放数字
vector<int> a;
while (cin >> i)
    a.push_back(i);
auto c = a.begin();
for (decltype(a.size()) b = a.size()-1; b >= a.size()/2;b--)
{ //2
    sum = *c + *(c + b-k);
    cout << sum << endl;
    k++;
    c++;

}//2
    getchar();
    getchar();
    return 0;
}//1