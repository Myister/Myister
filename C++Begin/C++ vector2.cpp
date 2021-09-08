#include<iostream>//输入一串字符串 放入vector 如果是小写则改成大写
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{//1
    int i = 0,k=0;
    string word;//录入单词
    vector<char> a;//扔单词
    vector<int> b;//记录要大写变小写的位置
    while(cin >>word)
   {//2
    if(isgraph)//如果是字母 
    {//3
    for(char c:word)//将字符塞进a
        a.push_back(c);
        for (char &c:a)//检测哪个字母是小写 转化为大写
        {//4
            c = toupper(c);
            b.push_back(i);
            ++i;
        }//4
        for (decltype(b.size()) c = 0; c < b.size();c++)
            {//5
            k = b[c];
            word[k] = toupper(word[k]);//根据位置转换大小写
            }//5
            cout << word << endl;
    }//3
    else
        cout << "输入错误" << endl;
   }//2
   getchar();
   getchar();
   return 0;
}//1