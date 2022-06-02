#include<stdio.h>
int main()
{
    int i=97;
    while (i<=122)
    {
        printf("%c",i);
        i++;
    }

    do
    {
        printf("%c",i);
        i++;
    }while(i<=122);

    for(i;i<=122;i++)
    {
        printf("%c",i);
    }



    
}