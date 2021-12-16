#include<stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    return a / b;
}

void main()
{
    int Addition = sum(15, 10);
    printf("Addition is : %d\n", Addition);

    int subtraction = sub(15, 10);
    printf(" subtraction is : %d\n", subtraction);

    int multiplication = mul(15, 10);
    printf(" multiplication  is : %d\n", multiplication );

    float divition = div(15, 10);
    printf(" divition is : %f\n", divition);
}
