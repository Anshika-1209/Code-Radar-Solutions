#include <stdio.h>
int main()
{
    int a,b ,result;
    char ch;
    scanf("%d%d%d%c",&a,&b,&ch);
    if(ch=='+')
    {
        result=a+b;
        printf("%d",result);
    }
    else if(ch=='-')
    {
        result=a-b;
        printf("%d",result);
    }
    else if(ch=='*')
    {
        result=a*b;
        printf("%d",result);
    }
    else if(ch=='/')
    {
        b!=0;
        result=a/b;
        printf("%d",result);
    }
    else
    {
        printf("Error");
    }

}