#include<stdio.h>
int year;
int main()
{
    scanf("%d",&year);
    printf(year%4==0?((year%100==0 && year%400==0)?"Leap year":"Not Leap Year"):"Not Leap Year");
}