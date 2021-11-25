//take date and month from user in int and print month in letter

#include <stdio.h>
void main()
{

    int date, month;
    printf("enter the date-\n");
    scanf("%d", &date);
    printf("enter the month-\n");
    scanf("%d", &month);
    int year;
    printf("enter the year-\n");
    scanf("%d", &year);

    printf("%d  ", date);

    switch (month)
    {
    case 1:
        printf("JAN  ");
        break;

    case 2:
        printf("FEB  ");
        break;
    case 3:
        printf("MAR  ");
        break;
    case 4:
        printf("APR  ");
        break;
    case 5:
        printf("MAY  ");
        break;
    case 6:
        printf("JUN  ");
        break;
    case 7:
        printf("JUL");
        break;
    case 8:
        printf("AUG  ");
        break;
    case 9:
        printf("SEP  ");
        break;
    case 10:
        printf("OCT  ");
        break;
    case 11:
        printf("NOV  ");
        break;
    case 12:
        printf("DEC  ");
        break;
    }

    printf("%d  ", year);
}
