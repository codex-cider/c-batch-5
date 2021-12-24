#include<stdio.h>
void main()
{
    float mrp,discount = 0, discountAmount;
    printf("Enter the mrp : ");
    scanf("%f",&mrp);

    if(mrp > 5000)
    {
        discount = 20;
    }
    discountAmount = (mrp*discount)/100;
   
    printf("product price    %.2f\n",mrp);  
    printf("discount price   %.2f\n",discountAmount);  
    printf("-------------------------\n");  
    printf("total Amount     %.2f\n",mrp - discountAmount);  
}

