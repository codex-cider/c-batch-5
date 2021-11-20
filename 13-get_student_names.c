#include<stdio.h>
void main()
{
   char name[10][5];
   printf("enter student name\n :");
   printf("1-->name");
   fgets(name[0],15,stdin);
   printf("2-->name");
   fgets(name[1],15,stdin);
   printf("\n\n");
   printf("1--> name is :%s\n",name[0]);
   printf("2--> name is  :%s\n",name[1]);
}