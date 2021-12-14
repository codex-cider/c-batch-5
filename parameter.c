// 3 parameter
// primciple
//rate
//time

#include <stdio.h>
void simpleintrest();
void area();
void main()
{
    int option;
    printf("press 1 for simple intrest\n");
    printf("press 2 for area\n");
    scanf("%d", &option);

    if (option == 1)
    {
        simpleintrest();
    }
    else if (option == 2)
    {
        area();
    }

    else
    {
        printf("invalid");
    }
}

void simpleintrest() //parameter mai variable declare krtai hai
{                    //ek function ka data dusrai functrion mai daina ho to parameter use krtai hai
    float principle, rate, time;
    printf("enter the value of principle:");
    scanf("%f", &principle);
    printf("enter the value of rate:");
    scanf("%f", &rate);
    printf("enter the value of time:");
    scanf("%f", &time);
    float simpleintrest;
    simpleintrest = principle * rate * time / 100;
    printf("simpleintrest is-%.1f\n", simpleintrest);
}
void area()
{
    float pei = 3.14;
    float radius;
    printf("enter the value of radius:");
    scanf("%f", &radius);
    float area = pei * radius * radius;
    printf("area of circle is:%.1f", area);
}
