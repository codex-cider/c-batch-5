#include <stdio.h>

void main()
{
    int a[5][5];

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("Enter value for  a[%d][%d] ", row, col);
            scanf("%d", &a[row][col]);
        }
    }
}