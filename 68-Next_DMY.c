/*
#include <stdio.h>

int main ()
{
    int month = 0;
    int day = 0;
    int year = 0;
    printf("Enter today's date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &month, &day, &year);
    printf("%.2i/%.2i/%.2i", month, day, year);
    return 0;
}
*/
#include<stdio.h>

#include<conio.h>

void main( ){

int dd,mm,yyyy,nd,nm,ny,ndays;

clrscr( );

printf(“enter the date,month,year”);

scanf(“%d%d%d”,&dd,&mm,&yyyy);

switch(mm){

case 1:case 3:case 5:case 7:case 8:case 10:case 12:

ndays=31;

break;

case 4:case 6:case 9:case 11:

ndays=30;

break;

case 2:

if(yyyy%4==0)

ndays=29;

else

ndays=28;

break;

}

nd=dd+1;

nm=mm;

ny=yyyy;

if(nd>ndays)

{

nd=1;

nm++;

}

if(nm>12)

{

nm=1;

ny++;

}

printf(“Given date is

%d:%d:%d\n”,dd,mm,yyyy);

printf(“next days date is

%d:%d:%d\n”,nd,nm,ny);

getch( );

}