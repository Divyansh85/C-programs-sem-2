#include<stdio.h>
#include <string.h>
int main()
{
    int flag=0;
    char a[100],a1[100];
    gets(a);
    gets(a1);
    // int c=strcmp(a,a1);
    if (strlen(a)==strlen(a1))
    {
        for(int i=0;a[i];i++)
        {
            if(a[i]!=a1[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("equal");
        }
        else if(flag==1)
        {
            printf(" Not Equal");
        }
    }
    else
    printf("Not equal");

}