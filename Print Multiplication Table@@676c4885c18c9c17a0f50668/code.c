#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<k;i++)
{
    for(j=1;j<=10;j++)
    {
        printf("%d\t",i*j);
    }
    printf("\n");
}
return 0;
}