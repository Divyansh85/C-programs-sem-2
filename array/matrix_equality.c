#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int array1[n][n],array2[n][n];
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
            if(array1[i][j]==array2[i][j])
            {
                c+=1;
            }
        }
        if(c==(n*n))
        {
            printf("Equal");
        }
    }
}