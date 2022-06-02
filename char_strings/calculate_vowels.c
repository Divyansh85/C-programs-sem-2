#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c=0;
    scanf("%[^\n]",a);
    strlwr(a);
    for(int i=0;a[i];i++)
    {
        if (a[i]=='a' || a[i]=='e'|| a[i]=='i'|| a[i]=='o' || a[i]=='u')
        c++;
    }
    printf("%d",c);

}