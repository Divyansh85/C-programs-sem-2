#include<stdio.h>
#include <string.h>
int str(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c ",string[i]);
    }    

}
int main()
{
    char string[100];
    gets(string);
    str(string);
}