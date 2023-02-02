#include <stdio.h>

int main()
{
    int h, m;
    char t[3];
    scanf("%d:%d", &h, &m);
    if (h == 0) 
    {
        h = 12;
        sprintf(t, "AM");
    } 
    else if (h < 12) 
    {
        sprintf(t, "AM");
    } 
    else if (h == 12) 
    {
        sprintf(t, "PM");
    } 
    else 
    {
        h -= 12;
        sprintf(t, "PM");
    }
    printf("%02d:%02d %s
", h, m, t);
}