#include<stdio.h>
void main()
{
    int a[5];
    int i = 0;
    
    while ( i < 5)
    {
        printf("you Enter the value of array : a[%d] = ", i);
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    while ( i < 5 )
    {
        printf(" a[%d] = %d \n ", i, a[i] );
        i++;
    }
}
