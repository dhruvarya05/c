//WAP to calculate the area of a rectangle.
#include<stdio.h>
float rectangleArea(float a,float b)
{
    return a*b;
}
int  main()
{
    float a,b;
    printf("enter the length of a rectangle=");
    scanf("%f",&a);
    printf("enter the breadth of a rectangle=");
    scanf("%f",&b);
    printf("area of rectangle=%f",rectangleArea(a,b));
    return 0;
}