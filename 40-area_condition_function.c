#include<stdio.h>
void areaOfTriangle();
void areaOfSquare();
void areaOfRectangle();
void areaOfCircle();
void areaOfTriangle()
{
   float b,h;
   printf("enter the base :");
   scanf("%f",&b);
   printf("enter the height :");
   scanf("%f",&h);
   float areaOfTriangle=(b*h)/2;
   printf("Area of triangle is :%.2f\n",areaOfTriangle);
}
void areaOfSquare()
{
    float a;
    printf("enter the area:");
    scanf("%f",&a);
    float areaOfSquare=a*a;
    printf("Area of square :%.2f\n",areaOfSquare);
}
void areaOfRectangle()
{
   float l,w;
   printf("enter the length :");
   scanf("%f",&l);
   printf("enter the width :");
   scanf("%f",&w);
   float areaOfRectangle=l*w;
  printf("Area of rectangle :%.2f\n",areaOfRectangle);
}
void areaOfCircle()
{
    float r;
    printf("enter the radius :");
    scanf("%f",&r);
    float pi=3.14;
    float areaOfCircle=pi*r*r;
    printf("Area of circle is :%.2f\n",areaOfCircle);
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
      areaOfTriangle();
    }
    else if (option==2)
    {
      areaOfSquare();
    }
    else if(option==3)
    {
       areaOfRectangle();
    }
    else if(option==4)
    {
       areaOfCircle();
    }
    else
    {
       printf("wrong option");
    }
}