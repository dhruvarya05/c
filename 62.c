// Write a C program to find power of any number.

#include <stdio.h>
#include <math.h> 
int main()
{
    double base, expo, power;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);
    power = pow(base, expo);

    printf("%lf ^ %lf = %lf", base, expo, power);

    return 0;
}