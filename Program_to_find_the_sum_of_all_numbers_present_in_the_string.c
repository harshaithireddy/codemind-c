#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, sum = 0;
    scanf("%s",str);

    for (i=0; i<strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            sum=sum+str[i] - '0';
        }
    }

    printf("%d
", sum);
}
