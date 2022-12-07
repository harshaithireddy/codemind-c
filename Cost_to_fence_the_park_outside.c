#include<stdio.h>
int main()
{
    int l,b,w,c,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ar=(l+2*(w))*(b+2*(w))-(l*b);
    tc=c*ar;
    printf("%d",tc);
}