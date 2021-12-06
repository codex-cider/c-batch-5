#include <stdio.h>
void main()
{
    int date, month, year;

    printf("Enter any date : ");
    scanf("%d", &date);
    printf("Enter any month : ");
    scanf("%d", &month);
    printf("Enter any year : ");
    scanf("%d", &year);

    if (date < 28)
    {
        date++;
    }
    else
    {
        if (date == 28 && month == 2 && (year % 4) != 0)
        {
            date = 1;
            month++;
        }
        else if (date == 29 && month == 2 && (year % 4) == 0)
        {
            date = 1;
            month++;
        }
        else if (date == 30)
        {
            switch (month)
            {
            case 4:
            case 6:
            case 9:
            case 11:
                date = 1;
                month++;
                break;
            }
        }
        else if (date == 31)
        {
            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                date = 1;
                month++;
                break;
            }
        }
        else
        {
            date++;
        }
    }
    if (month == 13)
    {
        month = 1;
        year++;
    }
    printf("%d/%d/%d", date, month, year);
}