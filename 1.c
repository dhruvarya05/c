/*WAP to check if a student passed or failed
marks>30 is pass
marks <=30 is fail*/
#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of a student=");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("pass");
    }
    else if (marks<=30)
    {
      printf("fail");
    }
return 0;
}