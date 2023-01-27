#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i;
    for(i=0; str[i]!=NULL; i++)
    {
        str[i]=tolower(str[i]);
    }
    printf("%s
", str);
}