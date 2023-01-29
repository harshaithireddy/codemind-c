#include <stdio.h>
#include <string.h>

int main()
{
    int T, n;
    scanf("%d", &T);
    while (T--) 
    {
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int count = 0, ones = 0;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '1')
            {
                ones++;
                count += ones;
            }
        }
        printf("%d
", count);
    }
}
