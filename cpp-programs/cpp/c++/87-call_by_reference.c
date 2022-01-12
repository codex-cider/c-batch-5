#include<stdio.h>
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("p = %d, q = %d", *p, *q);
}
void main()
{
    int a = 100, b = 200;
    swap(&a, &b);
    printf("\na = %d, b = %d", a, b);
}
