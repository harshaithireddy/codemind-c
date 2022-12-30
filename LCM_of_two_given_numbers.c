#include<stdio.h>
int main()
{
    int a,b,max,lcm;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(a!=0 && b!=0)
    {
        if(max%a==0 && max%b==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("%d ",lcm);
}