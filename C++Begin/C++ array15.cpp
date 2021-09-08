#include<iostream>//用类型别名
using std::cin;
using std::cout;
using std::endl;
typedef int int_array[4];
int main()
{//1
    int_array ia={0,1,2,3};
    for (int i:ia)
        cout << i << endl;
    getchar();
    getchar();
    return 0;

}//1