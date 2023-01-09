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
    for(i=n;i>=1;i--)
    {
        printf("%d ", i);
        if(i!=1)
        {
            printf("X ");
        }
    }
    printf("= %d", fact);
    return 0;
}