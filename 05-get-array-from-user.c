#include <stdio.h>
void main()
{
    int i;
    int size;
    
    printf("enter the size of array :");
    scanf("%d",&size);

    int a[size];

    for ( i = 0; i < size; i++)
        
    {
        printf("you entered the value of a[%d] :", i);
        scanf("%d", &a[i]);
    }
    
    for ( i = 0; i < size; i++)
        
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}