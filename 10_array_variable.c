#include <stdio.h>
void main()
{
    int a[10];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
    a[5] = 60;
    a[6] = 70;
    a[7] = 80;
    a[8] = 90;
    a[9] = 100;
    a[10] = 110;

    printf("&a[1]=%x\n", &a[1]);
    printf("a[2]=%d\n", a[2]);
    printf("&a[2]=%x\n", &a[2]);
    printf("a[3]=%d\n", a[3]);
    printf("&a[3]=%x\n", &a[3]);
    printf("a[4]=%d\n", a[4]);
    printf("&a[4]=%x\n", &a[4]);
    printf("a[5]=%d\n", a[5]);
    printf("&a[5]=%x\n", &a[5]);
    printf("a[6]=%d\n", a[6]);
    printf("&a[6]=%x\n", &a[7]);
    printf("a[7]=%d\n", a[7]);
    printf("&a[7]=%x\n", &a[7]);
    printf("a[8]=%d\n", a[8]);
    printf("&a[8]=%x\n", &a[8]);
    printf("a[9]=%d\n", a[9]);
    printf("&a[9]=%x\n", &a[9]);
    printf("a[10]=%d\n", a[10]);
    printf("&a[10]=%x\n", &a[10]);
}