#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^
]c",str);
    char max_char = str[0];
    int i;

    for (i=1;str[i] != NULL;i++)
    {
        if (str[i] > max_char)
        {
            max_char = str[i];
        }
    }

    printf("%c
", max_char);
}
