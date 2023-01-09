//WAP to calculate the area of the square using function.
#include<stdio.h>
float squareArea(float side)
{
    return side*side;
}
int main()
{
    float side;
    printf("enter the side of a square=");
    scanf("%f",&side);
    printf("area of a square=%f",squareArea(side));
    return 0;
}