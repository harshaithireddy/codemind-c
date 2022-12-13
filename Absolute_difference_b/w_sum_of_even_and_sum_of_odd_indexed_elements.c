#include<stdio.h>
int main()
{
    int n,i,sum=0,sums=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        sums=sums+a[i];
    }
    if(sum>sums)
    d=sum-sums;
    else
    d=sums-sum;
    printf("%d",d);
}