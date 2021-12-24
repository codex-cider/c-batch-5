#include<stdio.h>
void main()
{
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("This is leep year");
    }
    else
    {
        printf("This is not leep year : ");
    }
}
