#include<stdio.h>
int main()
{
    int c=0;
    char a[100];
    scanf("%[^\n]",a);
    for(int i=0;a[i];i++)                   // when a[i] becomes null character it will run till then 
    {
        if (a[i]>='A' && a[i]<='Z') 
        c+=1;
    }
    printf("%d",c);
}