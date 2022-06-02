#include<stdio.h>
int main()
{
    int number , index,n;
    scanf("Size of array is : %d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);       
    }
    scanf("Delete element at index : %d",&index);
    for(int j=index;j<n;j++)
    {
        array[j]=array[j+1];
    }
    n=n-1;
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);       
    }
}