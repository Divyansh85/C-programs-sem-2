#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array1[n],array2[2*n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);       
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
        array2[n+i]=array1[i];       
    }
    for(int i=0;i<(2*n);i++)
    {
        printf("%d ",array2[i]);       
    }

}    