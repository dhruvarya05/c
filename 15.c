//WAP to calculate the area of the circle using function.
#include<stdio.h>
float circleArea(float rad)
{
    return 3.14*rad*rad;
}
int main()
{
    float rad=2;
    printf("area is =%f",circleArea(rad));
    return 0;
}