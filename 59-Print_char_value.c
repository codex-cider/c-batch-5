#include<stdio.h>
void main()
{
    char p;

    printf("Enter any charactor : ");
    scanf("%c", &p);

    if( p >= 'A' && p <='Z' )
    {
        printf("capital letter");
    }
    else if(p >= 'a' && p <='z')
    {
          printf("small latter");
    }
    else
    {
         printf("This is default");
    }
}
