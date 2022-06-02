#include<stdio.h>
int main()
{
    int c=0;
    char a[100];
    scanf("%[^\n]",a);                      
    for(int i=0;a[i];i++)
    {
        if(a[i]==32)
        c+=1;
    }
    printf("%d",c);
    return 0;
}