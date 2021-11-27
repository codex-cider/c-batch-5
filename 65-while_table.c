#include<stdio.h>
void main()
{
    int table, i=1;
    printf("Enter any number : ");
    scanf("%d",&table);
    while (i <= 10 )
    {
        printf("%d \n",table * i );
        i++;
    }   
}