#include<stdio.h>
int main()
{
    int num,dig,first;
    scanf("%d",&num);
    first=num%10;
    // while(num>0)
    // {
    //     dig=num%10;
    //     num=num/10;
    // }

    // do
    // {
    //     dig=num%10;
    //     num=num/10;
    // }while (num>0);
    

    for(num;num>0;)
    {
        dig=num%10;
        num=num/10;
    }

    printf("%d\n",first);
    printf("%d\n",dig);
}