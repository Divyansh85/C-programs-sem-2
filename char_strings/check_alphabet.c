#include<stdio.h>
char element;
void main()
{
    scanf("%c",&element);
    int ascii=element;
    printf(((ascii>=97 && ascii<=122)||(ascii>=65 && ascii<=90))?"alphabet":"Not alphabet");
}