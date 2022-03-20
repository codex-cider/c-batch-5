#include <stdio.h>

void main()
{
    int a[] = {10, 20, 30};

    printf("Address of a    %d\n", &a);
    printf("Address of a[0] %d\n", &a[0]);
    printf("Address of a[1] %d\n", &a[1]);
    printf("Address of a[0] %d\n", &a[2]);

    int *pt = a;

    printf("First is %d\n", *pt);
    pt++;
    printf("Second is %d\n", *pt);
    pt++;
    printf("Third is %d\n", *pt);
}