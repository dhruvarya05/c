//WAP to check if a given number is armstrong or not.
#include<stdio.h>
int main()
{
    int r,temp,sum=0,n;
    printf("enter any number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("it is armstrong number");
    }
else{
    printf("it is not an armstrong number");
}
return 0;
}