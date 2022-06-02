#include<stdio.h>
int month;
char *months[]={"","31","28 Or 29","31","30","31","30","31","31","30","31","30","31"};
void main()
{
    scanf("%d",&month);
    printf((month>0 && month<13)?months[month]:"Invalid Month");
}