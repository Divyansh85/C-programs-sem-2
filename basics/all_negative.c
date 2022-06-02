#include<stdio.h>
int main()
{
   int n,c=0;
   scanf("%d",&n);
   int array[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   for(int i=0;i<n;i++)
   {
       if(array[i]<0)
        {
           printf("negative ! = %d\n",array[i]);
           c+=1;
        }
   }
   printf("total negative %d\n",c);

}