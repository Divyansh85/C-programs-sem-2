#include<stdio.h>
int main()
{
    int n ,c=0,c1=0;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
            if(i!=j && array[i][j]==0)
            {
                c+=1;
            }
            if(i==j && array[i][j]==1)
            {
                c1+=1;
            }
        }
    }
    if (c1==n && c==(n*n)-3)
    {
        printf("identity Matrix");
    }

}