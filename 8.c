//WAP to print the table of a number.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dX%d = %d\n",n,i,n*i);
        
    }
    return 0;
}