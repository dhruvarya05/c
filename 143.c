//WAP to print factorial of a number n.
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter any number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of a number=%d",fact);
return 0;
}