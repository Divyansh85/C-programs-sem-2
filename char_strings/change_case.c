#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c=0;
    scanf("%[^\n]",a);
    for(int i=0;a[i];i++)
    {
        if (a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if (a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);        
}