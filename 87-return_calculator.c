#include<stdio.h>
int sum(int a, int b)
{
    printf("Enter here first number : ");
    scanf("%d", &a);
    printf("Enter here second number : ");
    scanf("%d", &b);
    return a + b;
}
int sub(int a, int b)
{
    printf("Enter here first number : ");
    scanf("%d", &a);
    printf("Enter here second number : ");
    scanf("%d", &b);
    return a - b;
}
int mul(int a, int b)
{
    printf("Enter here first number : ");
    scanf("%d", &a);
    printf("Enter here second number : ");
    scanf("%d", &b);
    return a * b;
}
float div(float a, float b)
{
    printf("Enter here first number : ");
    scanf("%f", &a);
    printf("Enter here second number : ");
    scanf("%f", &b);
    return a / b;
}
void main()
{   
    int a,b;
    int option;
    printf("Enter one for sum : \n");
    printf("Enter two for sub : \n");
    printf("Enter two for mul : \n");
    printf("Enter two for sub : \n");
    scanf("%d", &option);
    if(option == 1)
    {
        int addition = sum(a,b);
        printf("addition is : %d\n",addition);
    }
    else if (option == 2)
    {
        int substraction = sub(a,b);
        printf("substraction is : %d\n",substraction);
    }
    else if (option == 3)
    {
        int multiplication = mul(a,b);
        printf("multiplication is : %d\n",multiplication);
    }
    else if (option == 4)
    {
        float divison = div(a,b);
        printf("divison is : %f\n",divison);
    }
    else
    {
        printf("\nThis is out of option");
    }
}
