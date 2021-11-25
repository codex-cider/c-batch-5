#include<stdio.h>
void main()
{
   int date,month,year;
   printf("enter the date :");
   scanf("%d",&date);
   printf("enter the month :");
   scanf("%d",&month);
   printf("enter the year :");
   scanf("%d",&year);
   printf("%d ",date);
   if (month==1){
   printf("JANUARY ");
   }
   else if(month==2){
   printf("FABRUARY ");
   }
    else if(month==3){
   printf("MARCH ");
   }
    else if(month==4){
   printf("APRIL ");
   }
    else if(month==5){
   printf("MAY ");
   }
    else if(month==6){
   printf("JUNE ");
   }
    else if(month==7){
   printf("JULY ");
   }
    else if(month==8){
   printf("AUGUST ");
   }
    else if(month==9){
   printf("SEPTEMBER ");
   }
    else if(month==10){
   printf("TEN ");
   }
    else if(month==11){
   printf("NOVEMBER ");
   }
    else if(month==12){
   printf("DECEMBER ");
   }
   else
   {
   printf("not a month");
   }
   printf( "%d",year);
}