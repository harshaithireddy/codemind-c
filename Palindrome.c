#include<stdio.h>
int main()
{
    int n,r,sum=0,a;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(a==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}