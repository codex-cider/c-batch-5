#include<stdio.h>
void main()
{
    float principleAmount,time,rate,SI;
    printf("Etner principleAmount: ");
    scanf("%f",&principleAmount);

    printf("Etner time: ");
    scanf("%f",&time);
    
    printf("Etner rate: ");
    scanf("%f",&rate);
    
    SI=principleAmount*time*rate/100;
    printf("simple intres is :%d",SI);
}