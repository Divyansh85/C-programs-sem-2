#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int array[n];
   int copy[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
       copy[i]=array[i];
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",copy[i]);
   }

}   