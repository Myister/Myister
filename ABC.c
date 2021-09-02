#include<stdio.h>//小学算数小游戏
#include<stdlib.h>
#include<time.h>
FILE *fp;
int JiaFa(int d)
{
    fp = fopen("错题.txt", "a");//a模式在原有基础上追加 w+新建 会覆盖原有的
    int a, b,c,sum;
    srand((int)time(0));
    a=rand() % (99 - 1 + 1) + 1;
    b=rand() % (99 - 1 + 1) + 1;
    sum = a + b;
    printf("%d+%d=\n", a, b);
    printf("请输入正确答案\n");
    scanf("%d", &c);
    if(c==sum)
    printf("正确\n");
    else
    {
      printf("错误\n");
      d++;
      fprintf(fp, "%d+%d=%d\n", a, b, sum);
      fclose(fp);
    }
    return d;
}

int JianFa(int d)
{
    fp = fopen("错题.txt", "a");//a模式在原有基础上追加 w+新建 会覆盖原有的
    int a, b,c,sum;
    srand((int)time(0));
    a=rand() % (99 - 1 + 1) + 1;
    b=rand() % (99 - 1 + 1) + 1;
    sum = a - b;
    printf("%d-%d=\n", a, b);
    printf("请输入正确答案\n");
    scanf("%d", &c);
    if(c==sum)
    printf("正确\n");
    else
    {
      printf("错误\n");
      d++;
      fprintf(fp, "%d-%d=%d\n", a, b, sum);
      fclose(fp);
    }
    return d;
}

int ChuFa(int d)
{
    fp = fopen("错题.txt", "a");//a模式在原有基础上追加 w+新建 会覆盖原有的
    float a, b,c,sum;
    srand((int)time(0));
    a=rand() % (99 - 1 + 1) + 1;
    b=rand() % (99 - 1 + 1) + 1;
    sum = a / b;
    printf("%3.0f÷%3.0f=\n", a, b);
    printf("请输入正确答案\n");
    scanf("%f", &c);
    if(c==sum)
    printf("正确\n");
    else
    {
      printf("错误\n");
      d++;
      fprintf(fp, "%3.0f÷%3.0f=%3.0f\n", a, b, sum);
      fclose(fp);
    }
    return d;
}

int ChengFa(int d)
{
    fp = fopen("错题.txt", "a");//a模式在原有基础上追加 w+新建 会覆盖原有的
    int a, b,c,sum;
    srand((int)time(0));
    a=rand() % (99 - 1 + 1) + 1;
    b=rand() % (99 - 1 + 1) + 1;
    sum = a*b;
    printf("%d×%d=\n", a, b);
    printf("请输入正确答案\n");
    scanf("%d", &c);
    if(c==sum)
    printf("正确\n");
    else
    {
      printf("错误\n");
      d++;
      fprintf(fp, "%d×%d=%d\n", a, b, sum);
      fclose(fp);
    }
    return d;
}

void CuoTi()
{
    char cmdline[50];//用于保存每行的数组 每行做多50
    fp = fopen("错题.txt", "r"); //读取模式r
    if (fp == NULL)
        printf("你是天才没有错题\n");
    printf("\n");
    while (fgets(cmdline, 50, fp) != NULL)
    {
        printf("\033[40;33;5m%s\033[0m\n", cmdline);
        }
        
        
}

main()
{
    int NUMBER, d = 0, e = 0,f=0,g=0;
    do{
    system("cls");
    printf("\n");
    printf("小学算数题目小游戏\n");
    printf("输入1 加法游戏\n");
    printf("输入2 减法游戏\n");
    printf("输入3 除法游戏\n");
    printf("输入4 乘法游戏\n");
    printf("输入5 错题回顾\n");
    printf("输入其他数字退出\n");
    printf("您的错题被保存在与该应用同一目录下 文件名为错题.txt 可浏览\n");
    printf("made by Myister\n");
    printf("\n");
    scanf("%d", &NUMBER);
    switch(NUMBER)
    {
        case 1:
        {
            system("cls");
            printf("开始加法游戏\n");
            e = JiaFa(d);
            if(NUMBER!=5)
     {  if(e==1)
        g++;
        else
        f++;
    printf("\n");
    printf("\033[40;32;5m 你已经做对%d题\033[0m\n", f);
    printf("\n");
    printf("\033[40;31;5m 你已经做错%d题\033[0m\n", g);
    printf("\n");
     }
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            printf("开始减法游戏\n");
            e=JianFa(d);
            if(NUMBER!=5)
     {  if(e==1)
        g++;
        else
        f++;
    printf("\n");
    printf("\033[40;32;5m 你已经做对%d题\033[0m\n", f);
    printf("\n");
    printf("\033[40;31;5m 你已经做错%d题\033[0m\n", g);
    printf("\n");
     }
            system("pause");
            break;
        }
        case 3:
        {
            system("cls");
            printf("开始除法游戏\n");
            e=ChuFa(d);
            if(NUMBER!=5)
     {  if(e==1)
        g++;
        else
        f++;
    printf("\n");
    printf("\033[40;32;5m 你已经做对%d题\033[0m\n", f);
    printf("\n");
    printf("\033[40;31;5m 你已经做错%d题\033[0m\n", g);
    printf("\n");
     }
            system("pause");
            break;
        }
        case 4:
        {
            system("cls");
            printf("开始乘法游戏\n");
            e=ChengFa(d);
            if(NUMBER!=5)
     {  if(e==1)
        g++;
        else
        f++;
    printf("\n");
    printf("\033[40;32;5m 你已经做对%d题\033[0m\n", f);
    printf("\n");
    printf("\033[40;31;5m 你已经做错%d题\033[0m\n", g);
    printf("\n");
     }
     system("pause");
     break;
        }
        case 5:
        {
            system("cls");
            CuoTi();
            system("pause");
            break;
        }
    }
    }while (NUMBER > 0 && NUMBER <= 5);
    printf("游戏结束");
    getchar();
    return 0;
    }