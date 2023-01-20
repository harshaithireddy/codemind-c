#include<stdio.h>
int main()
{
    int n,r,p=1,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    while(temp>0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    int a=p-sum;
    printf("%d",a);
}