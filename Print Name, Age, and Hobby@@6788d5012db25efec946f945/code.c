#include <stdio.h>
int main()
{
char name[100];
int age;
char hobby[100];
scanf("%s %d",name,&age);
getchar();
fgets(hobby,sizeof(hobby),stdin);
printf("Name: %s\n",name);
printf("Age: %d\n",age);
printf("Hobby: %s",hobby);
return 0;
}