#include <cstring>//定义两个字符串数组 再定义一个存放他们 用strcpy strcat拷贝到第三个数组中
#include <iostream> 
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    char a[] = {"ab"};
    char b[] = {'a', 'v', 'g','\0'};
    char c[30];
    strcpy(c, a);
    for(char d:c)
        cout << d;
    cout << endl;
    strcpy(c, b);
    for(char d:c)
        cout << d;
    cout << endl;
    strcat(c, a);
    for(char d:c)
        cout << d;
    cout << endl;
    strcat(c, b);
    for(char d:c)
        cout << d;
    getchar();
    getchar();
    return 0;

}//1