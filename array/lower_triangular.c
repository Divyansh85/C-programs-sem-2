#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1+i;j<n;j++)
        {
            c=c+array[i][j];
        }
    }
    if (c==0)
    {
        printf("lower Triangular Matrix");
    }

}