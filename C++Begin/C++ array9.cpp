#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    char a[] = {'a','\0'};
    char b[] = {'b', 'c','\0'};
    strcpy(b, a);//拷贝会覆盖原来的
    for(char c:b)
        cout << c;
    getchar();
    getchar();
    return 0;
}//1