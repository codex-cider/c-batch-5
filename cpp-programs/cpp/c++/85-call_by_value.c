#include<stdio.h>
void swap(int a, int b);
void main()
{
    int a, b;
    printf("Enter here two values : ");
    scanf("%d%d",&a,&b);
    swap(a, b);
    printf("\nMain function a = %d, b = %d", a, b);
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Calling function a = %d, b = %d", a, b);
}

