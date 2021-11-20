// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>
void main()
{
    int a, i, row;
    printf("enter number of rows you want-");
    scanf("%d", &row);

    for (a = row; a >= 0; a--)
    {
        for (i = 0; i <= a; i = row - i)
        {
            printf("*");
        }
        printf("\n");
    }
}