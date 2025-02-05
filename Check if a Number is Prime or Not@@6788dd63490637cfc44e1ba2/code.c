#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        if(a%1==0)
        {
            printf(" Not Prime");
        }
        else
        {
            printf("Prime");
        }
    }
  
}