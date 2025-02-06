#include <stdio.h>
int main()
{
    int a,b ,result;
    char ch;
    scanf("%d%d%c",&a,&b,&ch);
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
    
        if(b!=0){
        result=a/b;
        printf("%d",result);}
    
    else
    {
        printf("error");
    }
    return 0;
}