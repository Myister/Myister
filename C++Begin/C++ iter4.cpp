#include<iostream>//输入一组数到vector 输出相邻两数的和
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
int i = 0, sum = 0; //存放数字
vector<int> a;
while (cin >> i)
    a.push_back(i);
for (auto b = a.begin(); b != a.end() - 1; ++b)
{ //2
    sum = *b + *(b + 1);
    cout << sum << endl;
    }//2
    getchar();
    getchar();
    return 0;
}//1