#include<stdio.h>
void main()
{
    float principal, rate,time, discountAmount;
    printf("Enter the  : ");
    scanf("%f",&mrp);

    if(mrp > 5000)
    {
        printf("discount = 20");
    }
    discountAmount = (mrp*discount)/100;
   
    printf("product price    %.2f\n",mrp);  
    printf("discount price   %.2f\n",discountAmount);  
    printf("-------------------------\n");  
    printf("total Amount     %.2f\n",mrp - discountAmount);  
}



