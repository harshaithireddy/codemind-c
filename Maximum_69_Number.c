#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100];
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='6')
        {
            a[i]='9';
            break;
        }
    }
    printf("%s",a);
}