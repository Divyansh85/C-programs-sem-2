#include<stdio.h>
float temp;
void main()
{
    printf("Enter temperature in celsius : ");
    scanf("%f",&temp);
    printf("Temperature in fahrenheit :%f ",(temp-32.0)*(5.0/9.0));
}