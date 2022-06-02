#include<stdio.h>
#include <string.h>
int main()
{
    int c_alpha=0,c_dig=0,c_special=0;
    char a[100];
    gets(a);
    for(int i=0;a[i];i++)
    {
        if ((a[i]>=97 && a[i]<=122) || (a[i]>=65 && a[i]<=90))
        {
            c_alpha+=1;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            c_dig+=1;
        }
        else
        {
            c_special+=1;
        }    
    }
    printf("%d %d %d",c_alpha,c_dig,c_special);
}