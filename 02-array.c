#include <stdio.h>

void main()
{
    // array is collection of similar type of data

    int a[5]; // declaration of array type variable
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n\n");

    // printf("a[0] = %d\n", a[0]);
    // printf("a[1] = %d\n", a[1]);
    // printf("a[2] = %d\n", a[2]);
    // printf("a[3] = %d\n", a[3]);
    // printf("a[4] = %d\n", a[4]);
    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}