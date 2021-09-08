#include<iostream>//存入一组整数 输出最后一个值和第一个值的和 以此类推 奇数中间位单独输出
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    vector<int> numbers;
    int i=0,sum=0;//整数
    while(cin >> i)//读入整数
        numbers.push_back(i);
    
    for (decltype(numbers.size()) b = 0; b < numbers.size()/2;b++)
    {//2
        sum = numbers[b] + numbers[numbers.size() - 1 - b];
        cout << sum << endl;
    }//2
    if(numbers.size()%2!=0)
        cout << numbers[numbers.size() / 2] << endl;//奇数中间位单独输出
    getchar();
    getchar();
    return 0;

}//1