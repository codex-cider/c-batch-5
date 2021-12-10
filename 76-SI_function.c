#include<stdio.h>
void si();
void si()
{
    int p, r, t;
    printf("Enter here principle : ");
    scanf("%d", &p);
    printf("Enter here rate : ");
    scanf("%d", &r);
    printf("Enter here time : ");
    scanf("%d", &t);
    int si = (p * r * t) / 100;
    printf("Simple intrest is :%d", si);
}    
    void main()
    {
        si();
    }
