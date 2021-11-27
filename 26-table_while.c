#include<stdio.h>
void main()
{
    int i=1,table;
    printf("enter the table of :");
    scanf("%d",&table);
    while(i<=10)
    {
        printf("%d\n",table*i);
        i++;
    }

}