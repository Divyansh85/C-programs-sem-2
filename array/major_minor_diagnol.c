#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n][n],c=n;
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Major Diagnol is : \n");
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",array[i][j]);
            }
        }
    }
    printf("\nMinor Diagnol is : \n");
    for(int i = 0;i<n;i++)
    {
        c=c-1;
        printf("%d ",array[i][c]);
    }
}