#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,sum=0;
    int copy=n;
    scanf("%d",&n);
    for(n;n>0;)
    {
        int dig=n%10;
        n=n/10;
        sum=sum+fact(dig);
    }
    if(sum==copy)
    {
        printf("strong num");
    }
}