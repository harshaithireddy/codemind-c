#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, j, count[256] = {0};
    char second_most;
    int max_count=0,second_max=0;
    
    scanf("%s",str);
    int len=strlen(str);
    
    for(i=0;i<len;i++)
    {
        count[str[i]]++;
    }
    
    for(i=0;i<256;i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            second_most = i;
        }
    }
   
    for (i=0;i<256;i++)
    {
        if (count[i] > second_max && count[i] < max_count) {
            second_max = count[i];
            second_most = i;
        }
    }
    
  
    if (second_max != 0)
    {
        printf("%c", second_most);
    }
    else
    {
        printf("-1");
    }
}
