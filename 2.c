/*WAP to give grades to a student
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A*/
#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of a student=");
    scanf("%d",&marks);
    if(30<=marks && marks<70)
    {
        printf("B");
    }
        else if(70<=marks && marks<90)
        {
        printf("A");
        }
        else if(90<=marks && marks<=100)
        {
        printf("A+");
        }
        else
        {
            printf("fail");
        }
    return 0;    
}