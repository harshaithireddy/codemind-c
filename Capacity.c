#include<stdio.h>
int main()
{
    int a,b,c,cap,kb;
    scanf("%d%d%d",&a,&b,&c);
    cap=2*a*b*c*512;
    kb=cap/1024;
    printf("%dkb",kb);
}