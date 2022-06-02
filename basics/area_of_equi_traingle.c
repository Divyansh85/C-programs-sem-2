#include<stdio.h>
#include<math.h>
int side;
void main()
{
    printf("Enter side of triangle : ");
    scanf("%d",&side);
    float area= (sqrt(3)/4)*side*side;
    printf("area of equilateral triangle : %.2f",area);
}