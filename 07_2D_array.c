//MATRIX

#include <stdio.h>
void main()
{
    int a[5][5]; //1st(5)=row, 2nd(5)=coloum
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("enter value of a[%d][%d]:", row, col);
            scanf("%d", &a[row][col]);
        }
    }
}