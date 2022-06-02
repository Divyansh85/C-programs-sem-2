#include<stdio.h>
int main()
{
    int n,dummy,sum=0;
    scanf("%d",&n);
    int first=0;
    int sec=1;
    printf("%d %d ",first,sec);
    for(int i=1;i<=n-2;i++)
    {
        sum=first+sec;
        first=sec;
        sec=sum;
        printf("%d ",sum);
    }

}