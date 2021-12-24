#include<stdio.h>
void main()
{
    float principleAmount,time,rate,SI,payable,permonthpayableAmount;
    SI=principleAmount*time*rate/100;
    payable=principleAmount + SI;
    printf("Etner principleAmount: ");
    scanf("%f",&principleAmount);
     printf("Etner time: ");
    scanf("%f",&time);
    printf("Etner rate: ");
    scanf("%f",&rate);
    permonthpayableAmount= payable / (12 * time);
    printf("simple intrest is :%.2f\n",SI);
    
    printf("total payable amount is :%.2f\n",payable);
    
    printf("you need to pay amount is :%.2f per mounth for %.2f year\n", permonthpayableAmount,time);
}
