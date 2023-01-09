//WAP to print the numbers from 0 to n.
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number=");
    scanf("%d",&n);
   // for(i=0;i<=n;i++)
   int i=0;
    while(i<=n)
    {
        printf("%d  ",i);
        i++;
    }
    return 0;
}