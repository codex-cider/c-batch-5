#include <stdio.h>
void main()
{
    int date, month, year, ndate;
    printf("enter the date :");
    scanf("%d", &date);
    ndate=date+1;
    printf("next date :%d\n",ndate);
    printf("enter the month :");
    scanf("%d", &month);
    printf("enter the year :");
    scanf("%d", &year);
    printf("%d/%d/%d",ndate,month,year);
}