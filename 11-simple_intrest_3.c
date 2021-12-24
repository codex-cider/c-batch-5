#include<stdio.h>
void main()
{
    float principleAmount = 2000, time = 2, rate = 10, SI ,payable ,permonthpayableAmount;
    
    SI = principleAmount * time * rate / 100;

    payable = principleAmount + SI;

    permonthpayableAmount = payable / (12 * time);

    printf("simple intrest is :%.2f\n\n ",SI);
    
    printf("total payable amount is :%.2f\n\n ",payable);
    
    printf("you need to pay amount is :%.2f \n\n per mounth for %.2f year\n", permonthpayableAmount,time);
}
