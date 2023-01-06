#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char str[100];
        scanf("%s",str);

        int len=strlen(str),i;
        int only_decimals=1;
        for(i=0; i<len; i++)
        {
            if(!isdigit(str[i]))
            {
                only_decimals=0;
                break;
            }
        }

        if(only_decimals==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
