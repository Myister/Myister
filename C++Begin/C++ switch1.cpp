#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{//1
    int Y = 0, FY = 0;//y元音 fy非元音
    string a;
    while(cin>>a)
    for(char b:a)//遍历字符串
    switch(b)
    {
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        case 'e':
        ++Y;
        break;
        default:
        ++FY;
        break;
    }
    cout<< "元音"<< Y<< "个" <<endl;
    cout<< "非元音"<<FY<<"个"<<endl;
    getchar();
    getchar();
    return 0;
}//1