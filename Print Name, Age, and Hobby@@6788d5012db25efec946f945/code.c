#include <stdio.h>
int main()
{
char name[100],hobby[100];
int age;
scanf("%s",name);
scanf("%d",&age);
getchar();
fgets(hobby,sizeof(hobby),stdin);
printf("%s %d\n",name,age);
printf("Name:%s\n",name);
printf("Age:%d\n",age);
printf("hobby:%s",hobby);
return 0;
}