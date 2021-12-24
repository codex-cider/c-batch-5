#include<stdio.h>
void main()
{
    float mrp;
    printf("Enter the mrp : ");
    scanf("%f",&mrp);
    float discount = 0;
    float discountAmount = (mrp*discount)/100;
    float finalAmount = mrp-discountAmount;
    printf("discountAmount : %f\n",discountAmount);
    printf("finalAmount : %f\n",finalAmount);
    if(mrp>5000)
    {
        printf("discount = 10");
    }
}


