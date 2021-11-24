//to find address of variable

#include <stdio.h>
void main()
{
    int a[2];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    printf("%d\n", a[0]);
    printf("\n");
    printf("a[0]=%d", a[0]);
    printf("\n");
    printf("&a[0]=%x", &a[0]);
    printf("\n");
    printf("\n");

    printf("%d\n", a[1]);
    printf("\n");
    printf("a[1]=%d", a[1]);
    printf("\n");
    printf("&a[1]=%x", &a[1]);
    printf("\n");
    printf("\n");

    printf("%d\n", a[2]);
    printf("\n");
    printf("a[2]=%d", a[2]);
    printf("\n");
    printf("&a[2]=%x", &a[2]);
    printf("\n");
    printf("\n");
}