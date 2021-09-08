#include<iostream>//vector 
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> a(11, 0);
    unsigned score;
    while(cin>> score)
    if(score<=100)
        ++a[score / 10];
    return 0;
}