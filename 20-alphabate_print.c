#include<stdio.h>
void main()
{
    char ch;
    printf("chracter type value :");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("this is small alphabets\n");
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("this is capital alphabets\n");
    }
     else
    {
    printf("invalid\n");
    }
}