#include<stdio.h>
int main()
{
    int n,temp,r,i,c=0,s=0,p=0;
    scanf("%d",&n);
    temp=n;
    int sq=n*n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        r=sq%10;
        sq=sq/10;
        s=s*10+r;
    }
    while(s!=0)
    {
        r=s%10;
        s=s/10;
        p=p*10+r;
    }
    if(temp==p)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}