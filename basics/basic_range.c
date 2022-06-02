#include<stdio.h>
#include<string.h>
int i;
char string[100];
void main()
{
    scanf("%[^\n]%*c",string);
    printf("%d",strlen(string));
    // for(i=0;i<strlen(string);i++)
    // {
    //     printf("%c\n",string[i]);
    // }
}