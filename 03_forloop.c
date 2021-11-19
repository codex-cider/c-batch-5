#include <stdio.h>
void main()
{

    int i, table;
    printf("enter the number-");
    scanf("%d", &table);
    for (i = 1; i < 10; i++)
    {
        printf("%d*%d=%d\n", table, i, table * i);
    }
}
