#include <stdio.h>
void main()
{
    int table;

    printf("enter the number:");
    scanf("%d", &table);
    int n = 1;
    while (n <= 10)
    {
        printf("%d*%d = %d\n", table, n, table * n);

        n++;
    }
}