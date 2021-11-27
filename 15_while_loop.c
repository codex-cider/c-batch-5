#include <stdio.h>
void main()
{
    int n;

    printf("enter the number:");
    scanf("%d", &n);
    int table = 1;
    while (table <= 10)
    {
        printf("%d*%d = %d\n", n, table, n * table);

        table++;
    }
}