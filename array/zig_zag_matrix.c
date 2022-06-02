#include<stdio.h>
// we need to reverse alternate rows 
int main()
{
    int n ;
    scanf("%d",&n);
    int array[n][n],c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            for(int j=n-1;j>=0;j--)
            {
                printf("%d ",array[i][j]);
            }
            printf("\n");
        }    
        else
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",array[i][j]);
            }
            printf("\n");
           
        }    
    }

}    