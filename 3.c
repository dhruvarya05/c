//WAP to check whether the charcter is upper case or lower case.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("upper case");
    }
        else if(ch>='a' && ch<='z')
        {
            printf("lower case");
        }
        return 0;
}