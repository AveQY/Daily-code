#include<stdio.h>
#include <stdlib.h>
#include<windows.h>
#define NUM 300

int main()
{
    int x=1,y=0;
    if(!x) y++;
    else if(x==0)
        if(x) y+=2;
        else y+=3;
    printf("%d\n",y);
    return 0;
}

/*
int main()
{
    int i=1,a=0;
    while(i<=100)
    {
        printf("i=%d \n",i);
        a=a+i;//1 4 9
        i+=2;//3 5 7,,,
    }
    printf("\na=%d\ni=%d",a,i);
    return 0;
}
/*纯中文字符颠倒没有搞定
int main()
{
    char string[2][3];
    scanf("%s",string[0]);
    printf("%s\n",string[0]);
    int len=strlen(string[0]);
    printf("%d\n",len);
    return 0;
}
*/

/*
//二维数组
int main()
{
    int n[3][4];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            n[i][j]=i*j;
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    //char a[3][100]={"1","nia","float"};
    //printf("%s",a[0]);
    return  0;
}

*/
/*
//纯英文字符颠倒
int main()
{
    char string[100];
    int i=0;
    scanf("%s",string);
    //getchar();
    int len=strlen(string);
    for(i=len;i!=-1;i--)
    {
        putchar(string[i-1]);
        //printf("%c",string[i]);
    }
    return 0;
}

/*
int main ()
{
    int n=2;
    //n+=n;n-=4; //4-->0  3-->1
    n+=n-=4;     //4-->-4 3-->-2 0-->4 1-->2
    printf("%d\n",n);
    return 0;
}
/*

    int a,b,c,d,m,n;
    a=b=c=d=m=n=1;
    (m=a>b)&&(n=c>d);
    printf("%d\n",n);

//指针
void qwe()
{
    int z=0,*p;
    printf("z=%d\n",z);
    *p=&z;
    printf("%d\n",*p);
    return z;
}

int main ()
{
    int z;
    //int z;
    qwe();
    if(z==0)
    {
        printf("a");
    }
    else
        printf("b");
    return 0;
}


/*

//字符数组
int main ()
{
    int i;
    char a[10];
    for(i=0;i<5;i++)
    {
        getchar();//吃掉一个字符
        scanf("%c",&a[i]);
    }
    printf("换行\n开始：");
    for(i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}

//交换//失败+1 待改进
int main()
{
    char lst;
    char s='1234';
    lst=list(s);
    lst.reverse();
    s=str(lst);
    printf("%c",s);
    return 0;
}

/*随机数
int main()
{
    int a;
    srand(time(NULL));//必须要的
    a=rand()%37;
    printf("%d",a);
    return 0;;
}


/*
int main()
{
    printf("你想的这个单词有多少个字母？\n");
    int num=10;
    do
    {
        scanf("%d",&num);
        break;
    }
    while(1);
    char word[num];
    scanf("%s",&word);
    //if()
    // printf("%d",strlen(word));
    int i=0;
    while(i<strlen(word))
    {
        printf("%c",word[i]);
        i++;
    }
    return 0;
}

/*
int  main()
{
    int a=0x7fffffff,b=025;
    float f1=123.456,f2=2.0;
    char c1,c2;
    c1='a';
    c2='b';
    printf("a=%d,b=%d\n",a,b);
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("f1=%f,f2=%f\n",f1,f2);
    a=f1;
    b=f2;
    printf("a=%d,b=%d\n",a,b);

}

/*
int main()
{
    int a[3][6],i,j;
    for(i=1;i<4;i++)
    {
        for(j=1;j<7;j++)
        {
            a[i][j]=i*j;
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
//冒泡排序
int main()
{
    int a[6],b=0,i;
    printf("冒泡排序\n任意输入5个数字...\n");
    scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);
    while(((a[1]>=a[2])&&(a[2]>=a[3])&&(a[3]>=a[4])&&(a[4]>=a[5]))==0)
    {
        b++;
        for(i=1; i<=4; i++)
        {
            if(a[i]<a[i+1])
            {
                a[i]=a[i+1]+a[i];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
        printf("第%d轮排序\n",b);

    }
    printf("从大到小：%d>%d>%d>%d>%d\n从小到大：%d<%d<%d<%d<%d\n",a[1],a[2],a[3],a[4],a[5],a[5],a[4],a[3],a[2],a[1]);
    printf("测试：a[0]=%d  a[6]=%d  a[7]=%d \n\n",a[0],a[6],a[7]);
    return 0;
}

/*


int main()
{
    int i=1;
    while(i<1800)
    {
        printf("*");
        switch(i)
        {
        case 150:
            re(10);
        case 250:
            re(10);
        case 350:
            re(30);
        case 400:
            re(30);
        case 550:
            re(30);
        case 850:
            re(30);
        case 1050:
            re(30);
        }
        i++;
    }
    return 0;
}

void re(num)
{
    int a=0;
    while(a<num)
    {
        a++;
        printf("0");
    }
    a=0;
}

/*do while循环
int main()
{
    int s=1;
    do
    {
        s++;
        printf("%d",s);
    }
    while(s<3);
    return 0;
}

/*
int main()
{
    int a[10],i;
    for(i=1;i<13;i++)
    {
        a[i]=i;
        printf("%d:%d ",a[i],i);
    }
    return 0;
}

/*
int main()
{
    char a[9];
    printf("请输入：");
    scanf("%s",&a);
    if(a=='incredibly')
    {
        printf("Bingo!");
    }
    else
    {
        printf("回答错误！\n你的答案：%s\n答案是incredibly\n",a);
    }
    return 0;
}
*/

/*九九乘法表
int main()
{
    int a,b;
    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
        {
            if(b<=a)
            {
                //printf("True\n");
                printf("%dx%d=%d ",a,b,a*b);
            }
        };
        printf("第%d次循环\n",a);
    }
    return 0;
}

/*
int main()
{
    int a=[3,4,5];
    int i;
    a[0]=1;
    a[1]=2;
    a[2]=3;
    for(i=1;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

/*输出100内能被5整除的数
int main()
{
    int a=0;
    while(a<=100)
    {
        a++;
        if(a%5==0)
        {
            printf("%d ",a);
        }
    }

    return 0;
}

/*打印季节
int main()
{
    int a;
    printf("请输入月份：");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("1月");
        break;
    case 2:
        printf("2月");
        break;
    case 3:
        printf("3月");
        break;
    case 4:
        printf("4月");
        break;
    case 5:
        printf("5月");
        break;
    case 6:
        printf("6月");
        break;
    case 7:
        printf("7月");
        break;
    case 8:
        printf("8月");
        break;
    case 9:
        printf("9月");
        break;
    case 10:
        printf("10月");
        break;
    case 11:
        printf("11月");
        break;
    case 12:
        printf("12月");
        break;
    default:
        printf("月份不存在");

    }
    return 0;
}

/*输出最大值
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        printf("进程1\n");
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else if(b>c)
    {
        printf("进程2\n");
        if(b>a)
            printf("%d",b);
        else
            printf("%d",a);
    }
    else if(c>a)
    {
        printf("进程3\n");
        if(c>b)
            printf("%d",c);
        else
            printf("%d",b);
    }


    //printf("%d",(!a==2)&&(!b==3));
    //printf("%d",?f);
    return 0;
}

/*测试
int main()
{
    int y;
    y=(13<12?15:6<7?8:9);
    printf("%d",y);
}

/*简易计算器
int main()
{
    float a,b;
    char c;
    printf("简易计算机\n");
    scanf("%f%c%f",&a,&c,&b);
    if(c=='+')
    {
        printf("%f %c% f = %f",a,c,b,a+b);
    }
    else if(c=='-')
    {
        printf("%f %c %f = %f",a,c,b,a-b);
    }
    else if(c=='*')
    {
        printf("%f %c %f = %f",a,c,b,a*b);
    }
    else if(c=='/')
    {
        printf("%f %c %f = %f",a,c,b,a/b);
    }
}
/*
int main()
{
    int x=5,y=3,i,j,k;
    y*=x+5;
     //x=(j=16,k=34,i=22222);
     printf("%d",x);
}


/*计算圆周长和面积
int main()
{
    //a半径，b周长，c面积
    printf("计算圆周长和面积\n请输入半径：");
    float a,b,c;
    scanf("%f",&a);
    b=2*PI*a;
    c=PI*a*a;
    printf("圆的半径:%.2f,周长:%.8f,面积:%.8f\n",a,b,c);
    return 0;
}


/*输出0到100奇数
int main()
{
    int a=0;
    while(a<100)
    {
        a++;
        if(a%2==1)
            printf("%d ",a);
    };
}


/*判断奇偶数
int main()
{
    int a;
    scanf("%d",&a);
    a=a%2;
    if(a=1)
        printf("奇数");
    else
        printf("偶数");
}


int main()
{
    int a;
    //scanf("%d",&a);//输入
    for(a=1;a<100;a=a+2)
    {
        printf("%d  ",a);
    };
    return 0;
}
*/
