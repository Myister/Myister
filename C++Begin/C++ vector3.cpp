#include<iostream>//读入一组整数塞进 vector 并且输出相邻没俩值得和
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{//1
    int i=0,sum=0;
    vector<int> numbers;
    while(cin >>i)
        numbers.push_back(i);
    for (decltype(numbers.size()) b = 0; b < numbers.size()-1;b++)
    {//2    
    sum = numbers[b] + numbers[b + 1];
     cout << sum << endl;
    }//2
    getchar();
    getchar();
    return 0;
}//1