#include<stdio.h>
int length,height;
void main()
{
    printf("Enter length and height for triangle\n");
    scanf("%d\n%d",&length,&height);
    float area = 0.5*length*height;
    printf("Area of triangle is : %.2f",area);

}