#include<stdio.h>
int main()
{
    int n,r,lar=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>lar)
        {
            lar=r;
        }
        n=n/10;
    }
    printf("%d",lar);
}