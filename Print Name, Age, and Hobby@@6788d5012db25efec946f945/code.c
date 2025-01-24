#include <stdio.h>
int main()
{
char name[100],hobby[100];
int age;
scanf("%s %d",name,&age);
getchar();
fgets(hobby,sizeof(hobby),stdin);
printf("%s %d\nName:%s\nAge:%d\nHobby:%s",name,age,name,age,hobby);
return 0;
}