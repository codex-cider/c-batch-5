#include<stdio.h>
void main()
{
    int i;
    int table;
    printf("enter the no. :");
    scanf("%d",&table);
    for (i=0;i<=10 ;i++)
    {
        printf("%d * %d =%d \n",table,i,table*i);
    }
}