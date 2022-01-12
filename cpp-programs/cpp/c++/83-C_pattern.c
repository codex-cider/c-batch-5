#include<stdio.h>
void main()
{
    int i, j, k;
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("*");             
        }
        for (k = 0; k <= 5; k++)
        {
            if (i >= 0 && i < 2 || i > 9 && i <= 11)
            {
                printf("**");
            }
            else 
            {
                printf("  "); //two space
            }            
        }
    printf("\n");    
    }
}
