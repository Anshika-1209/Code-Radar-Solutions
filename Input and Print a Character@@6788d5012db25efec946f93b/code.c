#include <stdio.h>
#include <c.type.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    printf("You entered:%c\n",ch);
    return 0;
}
