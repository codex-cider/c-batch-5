//take date and month from user in int and print month in letter

#include <stdio.h>
void main()
{

    int date, month;
    printf("enter the date-\n");
    scanf("%d", &date);
    printf("enter the month-\n");
    scanf("%d", &month);

    printf("date is-%d-%s", date, month);
}