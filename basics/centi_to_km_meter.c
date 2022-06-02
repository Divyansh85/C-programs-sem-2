#include<stdio.h>
float dis;
void main()
{
    printf("enter distance to change : ");
    scanf("%f",&dis);
    printf("Distance in Meters is %f\n ",dis/100);
    printf("Distance in KiloMeters is %f\n ",dis/100000);
}