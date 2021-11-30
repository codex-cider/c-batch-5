#include <stdio.h>
void main()
{
    int date, month, year, ndate,nmonth,nyear;
    printf("enter the date :");
    scanf("%d", &date);
    ndate=date+1;
    printf("enter the month :");
    scanf("%d", &month);
    nmonth=month+1;
    printf("enter the year :");
    scanf("%d",&year);
    nyear=year+1;
    printf("%d/%d/%d\n\n",date,month,year);
    printf("%d/%d/%d",ndate,nmonth,nyear);
}