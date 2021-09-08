#include<iostream>//输入成绩 分等级
using std::cin;
using std::cout;
using std::endl;
int main()
{//1
    int score;
    cout << "请输入成绩" << endl;
    while(cin>>score)
    if(0<=score&&score<=100)
    {//2
        if(0<score&&score<60)
        cout << "你的等级是D" << endl;
    if(60<=score&&score<75)
        cout << "你的等级是C" << endl;
    if(75<=score&&score<=90)
        cout << "你的等级是B" << endl;
    if(90<score&&score<=100)
        cout << "你的等级是A" << endl;
    }//2
    else
        cout << "请输入正确的成绩" << endl;//else 和if一起被包含进了while循环

    return 0;
}//1