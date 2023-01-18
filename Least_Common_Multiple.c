#include<stdio.h>
int main()
{
    long long int a,b,i,lcm,hcf;
    scanf("%lld%lld",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    lcm=a*b/hcf;    //hcf*lcm=a*b
    printf("%lld",lcm);
}