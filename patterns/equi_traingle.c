#include<stdio.h>
int i,j,space,limit;
void main()
{
    printf("Enter limit for triangle : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        for(space=limit-i;space>0;space--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
