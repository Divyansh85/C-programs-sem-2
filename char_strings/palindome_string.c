#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    strcpy(b,a);
    if(strcmp(strrev(b),a)==0)
    {
        printf("palindrome");
    }
    else
    printf("Not palindrome");
}