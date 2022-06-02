#include<stdio.h>
int base,power;
int ans=1;
int count=1;

void main()
{
    scanf("%d %d",&base,&power);
    while (count<=power)
    {
        ans=ans*base;
        count=count+1;
    }
    printf("answer is : %d",ans);
}