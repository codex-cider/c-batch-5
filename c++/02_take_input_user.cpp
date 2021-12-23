// cin = user sai value laiga
// std n lagana pade isliye using namespace likhtai hai

#include <iostream>
//using namespace
int main()
{
    int a, b;
    std::cout << "enter first number-\n";

    std::cin >> a;
    std::cout << "enter second number-\n";
    std::cin >> b;
    std::cout << "sum of both number is\n:" << a + b;
    printf("sum of both is-%d\n", a + b); // if we get error than include headerfile #include<stdio.h>
    printf("sum of %d and %d is-%d\n", a, b, a + b);
    std::cout << "sum of" << a << "and" << b << "is" << a + b;
}
