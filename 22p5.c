/*WAP to print the mirrored rhombus star pattern.
*****
 *****
  *****
   *****
    *****
    */
#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


