#include <stdio.h>
void main()
{
    int date, month, year, ndate, nmonth, nyear;
    printf("enter the date-\n");
    scanf("%d", &date);
    printf("enter the month-\n");
    scanf("%d", &month);
    printf("enter the year-\n");
    scanf("%d", &year);
    printf("%d/%d/%d\n", date, month, year);
    ndate = date + 1;
    nmonth = month + 1;
    nyear = year + 1;

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
            if (date == 29 && month == 2 && (year % 4) == 0)
            {
                date = 1;
                month++;
            }
        }
        else
            (date == 30);
        {
            switch (month)
            {
            case 4:
            case 6:
            case 9:
            case 11:
            }
            else(date == 31)
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
                }
            }
        }
    }
    if (month == 13)
    {
        month = 1;
        year++;
    }
    printf("%d/%d/%d", ndate, nmonth, nyear);
}
