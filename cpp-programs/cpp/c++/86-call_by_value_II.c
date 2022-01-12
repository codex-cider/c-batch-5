#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nx =%d y = %d", x, y);
}
void main()
{
    int a = 10 ,b = 20;
    printf("a = %d b = %d", a, b);
    swap(a, b);
    return 0;
}

