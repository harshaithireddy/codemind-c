#include <stdio.h>
#include <string.h>

int main()
{
char str1[100], str2[100], str3[200];
int i, j;
scanf("%s", str1);
scanf("%s", str2);

for (i = 0; str1[i] != NULL; i++)
{
    str3[i] = str1[i];
}
for (j = 0; str2[j] != NULL; j++, i++)
{
    str3[i] = str2[j];
}

str3[i] = NULL;

for (i = 0; str3[i] != NULL; i++) 
{
    for (j = i+1; str3[j] != NULL; j++) 
    {
        if (str3[i] > str3[j])
        {
            char temp = str3[i];
            str3[i] = str3[j];
            str3[j] = temp;
        }
    }
}

printf("%s
", str3);
}