#include<stdio.h>
void main()
{
    int table;
    printf("Enter any number for table : ");
    scanf("%d",&table);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", table, i,table*i);
    }
}
