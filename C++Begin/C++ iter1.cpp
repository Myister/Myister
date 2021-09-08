#include<iostream>//输入一组数 用迭代器 输出
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    int i=0;
    vector<int> numbers;
    while(cin >> i)
        numbers.push_back(i);
    for (auto a=numbers.cbegin(); a != numbers.cend();a++)
        cout << *a << endl;
    getchar();
    getchar();
    return 0;
}//1