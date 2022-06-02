#include<stdio.h>
int i,j,limit;
void main()
{
    printf("Enter Limit for triangle : ");
    scanf("%d",&limit);
    for (i=0;i<limit;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
