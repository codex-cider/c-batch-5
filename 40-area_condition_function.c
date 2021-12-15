#include<stdio.h>
void area_of_triangle();
void area_of_square();
void area_of_rectangle();
void area_of_circle();
void area_of_triangle()
{
   float b,h;
   printf("enter the base :");
   scanf("%f",&b);
   printf("enter the hieght :");
   scanf("%f",&h);
   float area_of_triangle=(b*h)/2;
   printf("Area of trianlge is :%.2f\n",area_of_triangle);
}
void area_of_square()
{
    float a;
    printf("enter the area:");
    scanf("%f",&a);
    float area_of_square=a*a;
    printf("Area of square :%.2f\n",area_of_square);
}
void area_of_rectangle()
{
   float l,w;
   printf("enter the lenght :");
   scanf("%f",&l);
   printf("enter the width :");
   scanf("%f",&w);
   float area_of_rectangle=l*w;
  printf("Area of rectangle :%.2f\n",area_of_rectangle);
}
void area_of_circle()
{
    float r;
    printf("enter the radius :");
    scanf("%f",&r);
    float pi=3.14;
    float area_of_circle=pi*r*r;
    printf("Area of circle is :%.2f\n",area_of_circle);
}
void main()
{
    int option;
    printf("Enter one for area of triangle\n");
    printf("Enter two for area  square\n");
    printf("Enter three for area rectangle\n");
    printf("Enter four for area circle\n");
    scanf("%d",&option);
    if (option == 1)
    {
      area_of_triangle();
    }
    else if (option==2)
    {
      area_of_square();
    }
    else if(option==3)
    {
       area_of_rectangle();
    }
    else if(option==4)
    {
       area_of_circle();
    }
    else
    {
       printf("wrong option");
    }
}