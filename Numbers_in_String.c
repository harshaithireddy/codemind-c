#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int i,len,sum = 0;

    scanf("%[^
]s",str);
    len = strlen(str);

    for(i=0;i<len;i++)
    {
        if (isdigit(str[i]))
        {
            sum=sum+str[i]-'0';
        }
    }

    printf("%d
", sum);
}
