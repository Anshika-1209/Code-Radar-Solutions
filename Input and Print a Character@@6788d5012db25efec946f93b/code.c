#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    printf("You entered:%c\n",ch);
    return 0;
}
