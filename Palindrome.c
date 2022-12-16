#include<stdio.h>
int main()
{
    int n,a,r,sum=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(a==sum)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}