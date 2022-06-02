#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    int copy=n;
    scanf("%d",&n);
    int length=log10(n)+1;
    for(int i=1;i<=length;i++)
    {
        int dig=n%10;
        n=n/10;
        sum=sum+pow(dig,length);
    }
    if(sum==copy)
    {
        printf("Armstrong num");
    }

    

}