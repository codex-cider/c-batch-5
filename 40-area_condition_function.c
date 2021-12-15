#include<stdio.h>
void AreaOfTriangle();
void AreaOfSquare();
void AreaOfRectangle();
void AreaOfCircle();
void AreaOfTriangle()
{
   float b,h;
   printf("enter the base :");
   scanf("%f",&b);
   printf("enter the height :");
   scanf("%f",&h);
   float AreaOfTriangle=(b*h)/2;
   printf("Area of triangle is :%.2f\n",AreaOfTriangle);
}
void AreaOfSquare()
{
    float a;
    printf("enter the area:");
    scanf("%f",&a);
    float AreaOfSquare=a*a;
    printf("Area of square :%.2f\n",AreaOfSquare);
}
void AreaOfRectangle()
{
   float l,w;
   printf("enter the length :");
   scanf("%f",&l);
   printf("enter the width :");
   scanf("%f",&w);
   float AreaOfRectangle=l*w;
  printf("Area of rectangle :%.2f\n",AreaOfRectangle);
}
void AreaOfCircle()
{
    float r;
    printf("enter the radius :");
    scanf("%f",&r);
    float pi=3.14;
    float AreaOfCircle=pi*r*r;
    printf("Area of circle is :%.2f\n",AreaOfCircle);
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