#include <stdio.h>

void main()
{
    int a = 20;

    printf("Address of a is %X\n", &a);

    int *pt;
    pt = &a;

    printf("PT is %X\n", pt);
    printf("&PT is %X\n", &pt);
    printf("*PT is %X\n", *pt);
}