#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array1[n][n],array2[n][n],array3[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            array3[i][j]=array1[i][j]*array2[j][i];
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
}