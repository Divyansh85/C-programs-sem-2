#include<stdio.h>
int main()
{
   int n,min=0,max;
   scanf("%d",&n);
   int array[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   max=array[0];
   for(int i=0;i<n;i++)
   {
       if (max<array[i])
       {
           max=array[i];
       }       
   }
   min=array[0];
   for(int i=0;i<n;i++)
   {
       if (array[i]<min)
       {
           min=array[i];
       }       
   }
   printf("max = %d , min = %d",max,min);
}   