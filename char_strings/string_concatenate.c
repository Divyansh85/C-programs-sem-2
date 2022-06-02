#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],a_concat[100];
    gets(a);
    gets(a_concat);
    // strcat(a,a_concat);
    for(int i = 0 ;a_concat[i];i++)
    {
        int c=strlen(a)+i;
        a[c]=a_concat[i];

    }
    printf("%s",a);

}