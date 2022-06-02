#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0 ;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    n=n+1;
    int hold=array[0];
    for(int j=0;j<n;j++)
    {
        array[j]=array[j+1];
    }
    n=n-1;
    array[n-1]=hold;
     for(int i=0 ;i<n;i++)
    {
        printf("%d ",array[i]);
    }  
      
}