// Pattern 1 -> Half pyramid of stars -> (S-1)
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter rows: ");
    scanf("%d",&n);
    printf("Star pattern 1: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("* ");
        }
       printf("\n");
    }
    return 0;
}