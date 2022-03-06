#include<stdio.h>
void main()
{
    int oprator, a, b;
    printf("Enter any oprator (+,-,*,/) : ");
    scanf("%d", &oprator);

    printf("Enter 1st oprands : ");
    scanf("%d",&a);
    printf("Enter 2nd oprands : ");
    scanf("%d",&b);
    switch (oprator)
    {
        case '+': 
            printf("sum of %d + %d = %d", a, b, a + b);
            break;
     
        case '-': 
            printf("%d - %d = %d", a, b, a - b);
            break;
        
        case '*': 
            printf("%d * %d = %d", a, b, a * b);
            break;
    
        case '/': 
            printf("%d / %d = %d", a, b, a / b);
            break;
    
        default:
            printf("Oprator is not currect!!");
            break;
    }
}