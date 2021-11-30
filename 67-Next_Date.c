#include<stdio.h>
void main()
{
    int date, month, year, nextdate,  nextmonth, nextyear;
     
    printf("Enter any date : ");
    scanf("%d", &date);
    nextdate = date + 1;
    printf("Enter any month : ");
    scanf("%d", &month);
    nextmonth = month + 1;
    printf("Enter any year : ");
    scanf("%d", &year);
    nextyear = year + 1;
    printf("Next date is : %d/%d/%d",nextdate, nextmonth, nextyear);
}