#include<iostream>//看下列表达式的意思 j<k 则为1  i!=1  为0 输出2
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int i = 1, j = 2, k = 3;
    if(i!=j<k)
        cout << "1" << endl;
    else
        cout << "2" << endl;
    getchar();
    getchar();
    return 0;
}//1