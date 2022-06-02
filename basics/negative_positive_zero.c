#include<stdio.h>
int num;
int main()
{
    scanf("%d",&num);
    printf(num>=0?(num==0?"Number is zero":"Number is positive"):"Number is negative");
}