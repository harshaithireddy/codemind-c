#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,words;
    
    scanf("%[^
]c",str);

    i=0;
    words=1;
    while(str[i] != NULL)
    {
        if(str[i] == ' ')
        {
            words++;
        }
        i++;
    }

    printf("%d
", words);
}
