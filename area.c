//area of rec
//circle
//square
//traingle

#include <stdio.h>
void areaOfRectangle();
void areaOfSquare();
void areaOfTraingle();
void areaOfCircle();
void main()
{
    int option;
    printf("press 1 for area of rectangle\n");
    printf("press 2 for area of square\n");
    printf("press 3 for area of traingle\n");
    printf("press 4 for area of circle\n");
    scanf("%d", &option);

    if (option == 1)
    {
        areaOfRectangle();
    }
    else if (option == 2)
    {
        areaOfSquare();
    }
    else if (option == 3)
    {
        areaOfTraingle();
    }
    else if (option == 4)
    {
        areaOfCircle();
    }

    else
    {
        printf("invalid");
    }
}

void areaOfRectangle()
{
    float l, b;
    printf("enter the value of l is:");
    scanf("%f", &l);
    printf("enter the value of b is:");
    scanf("%f", &b);

    float area;
    area = l * b;
    printf("area of rectangle is-%.1f\n", area);
}
void areaOfSquare()

{
    float a;
    printf("enter the value of a is:");
    scanf("%f", &a);

    float area;
    area = a * a;
    printf("area of square is-%.1f\n", area);
}

void areaOfTraingle()
{
    float b, h;
    printf("enter the value of b is:");
    scanf("%f", &b);
    printf("enter the value of h is:");
    scanf("%f", &h);

    float area;
    area = b * h / 2;
    printf("area of traingle is-%.1f\n", area);
}

void areaOfCircle()
{
    float r;
    printf("enter the value of r is:");
    scanf("%f", &r);

    float area;
    area = 3.14 * r * r;
    printf("area of circle is-%.1f\n", area);
}
