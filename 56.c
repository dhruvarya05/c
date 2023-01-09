// Write a C program to find area of rectangle.

#include <stdio.h>

int main()
{
    float length, width, area;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area of rectangle = %f", area);

    return 0;
}
