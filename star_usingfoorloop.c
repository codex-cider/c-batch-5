
// *
// **
// ***
// ****
// *****

#include <stdio.h>
void main()
{
    int a, i, row;
    printf("enter number of rows you want-");
    scanf("%d", &row);

    for (a = 1; a <= row; ++a)
    {
        for (i = 1; i <= a; ++i)
        {
            printf("*");
        }
        printf("\n");
    }
}