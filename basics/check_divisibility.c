#include<stdio.h>
int num;
int main()
{
    scanf("%d",&num);
    printf((num%5==0 || num%11==0)?"Divisible":"Not Divisible");
}
