#include<stdio.h>
char element;
void main()
{
    scanf("%c",&element);
    printf((element=='a' || element=='e' ||element=='i' ||element=='o' ||element=='u' )?"vowel":"consonants");
}