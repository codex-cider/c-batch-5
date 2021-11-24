//character is alphabet or not

#include <stdio.h>
void main()
{

    char p;
    char A, a;

    printf("enter your character-");
    scanf("%c", &p);

    if (p >= 'A' && p <= 'Z')
    {
        printf("capital letter");
    }
    else if (p >= 'a' && p <= 'z')
    {
        printf("small letter");
    }
    else
    {
        printf("invalid letter");
    }
}
