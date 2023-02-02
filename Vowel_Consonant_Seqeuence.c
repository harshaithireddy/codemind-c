#include <stdio.h>
#include <string.h>

int isVowel(char ch) 
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    return 0;
}

int main()
{
    char str[1000005];
    int len, i, j;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) 
    {
        if (isVowel(str[i])) 
        {
            putchar('V');
            while (isVowel(str[i + 1]) && i < len)
                i++;
        } 
        else 
        {
            putchar('C');
            while (!isVowel(str[i + 1]) && i < len)
                i++;
        }
    }
}
