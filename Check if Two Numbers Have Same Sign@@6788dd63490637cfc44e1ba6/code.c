#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==+(a) && b==+(b))
    {
        printf("Same Sign");
    }
    else if(a==-(+a) && b==-(b))
    {
        printf("Same Sign");
    }
    else
    {
        printf("Different Sign");
    }
    
}