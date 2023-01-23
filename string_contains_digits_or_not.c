#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        char s[50];
        scanf("%s", s);
        int has_digit = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (isdigit(s[j])) 
            {
                has_digit = 1;
                break;
            }
        }
        if (has_digit)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }

}
