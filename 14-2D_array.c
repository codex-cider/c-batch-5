#include<stdio.h>
void main()
{
    int row;
    int col;
    int a[5][5];
    for ( row=0;row<5;row++)
    {
        for ( col=0;col<5;col++)
        {
            printf("enter value for a[%d][%d] :",row,col);
            scanf("%d",&a[row][col]);
        }
    }
}