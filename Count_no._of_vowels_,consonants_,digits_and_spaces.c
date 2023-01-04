#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int vowels, consonants, digits, spaces;
    int i;
    vowels = consonants = digits = spaces = 0;

    scanf("%[^
]s",str);

    for(i=0;str[i] != NULL; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels: %d", vowels);
    printf("
Consonants: %d", consonants);
    printf("
Digits: %d", digits);
    printf("
White spaces: %d", spaces);
}
