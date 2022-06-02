#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],a_copy[100];
    gets(a);
    // for(int i = 0;a[i];i++)
    // {
    //     a_copy[i]=a[i];
    // }
    strcpy(a_copy,a);
    printf("%s",a_copy);

}