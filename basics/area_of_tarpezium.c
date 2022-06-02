#include<stdio.h>
int base1,base2,height;
int main()
{
    printf("Enter Values of Both the bases and height of trapezium : ");
    scanf("%d %d %d",&base1,&base2,&height);
    float area=0.5*(base1+base2)*height;
    printf("area of trapezium is : %f",area);
}