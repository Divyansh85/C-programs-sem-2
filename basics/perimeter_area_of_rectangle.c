#include <stdio.h>
int length,breadth;
void main()
{
    printf("Enter values of length and breadth",length,breadth);
    scanf("%d %d",&length,&breadth);
    printf("Area of rectangle is = %d\n",length*breadth);
    printf("Perimeter of rectangle is = %d ",2*(length+breadth));

}