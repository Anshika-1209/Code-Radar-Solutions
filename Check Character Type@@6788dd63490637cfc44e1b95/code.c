#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    if(ch==1||ch==2||ch==3||ch==4)
    {
        printf("Digit");
    }
    else if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%')
    {
        printf("Special Digit");
    }
}