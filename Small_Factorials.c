#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int fact=1;
        for(j=1;j<=n;j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    }
}