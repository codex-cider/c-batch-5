#include<stdio.h>
void main()
{
    float mrp, discount;
    float discountAmount;
    
    printf("Enter here mrp : ");
    scanf("%d", &mrp);
    printf("Enter here discount : ");
    scanf("%d", &discount);

    discountAmount =  (mrp * discount) / 100;

    printf("product price is   %.2f\n",discount);
    printf("discount Amount    %.2f\n",discount);
    printf("final amount   %.2f",mrp - discountAmount);
}