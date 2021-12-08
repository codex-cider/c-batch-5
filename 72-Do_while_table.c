#include<stdio.h>
void main()
{
    int i = 1, table;
    printf("Enter any number : ");
    scanf("%d", &table);
do
{
    printf("%d * %d = %d\n", i, table, i * table);
    i++;
} 
while (i <= 10);
}
