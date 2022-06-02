#include<stdio.h>
int i,j,limit;
void main()
{
    printf("Enter Limit for triangle : ");
    scanf("%d",&limit);
    i=limit;
    for(i=limit;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    

}
