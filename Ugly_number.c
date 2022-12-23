#include<stdio.h>
int is_ugly(int n)
{
    if(n<=0)
    return 0;
    if(n==1)
    return 1;
    while(n%2==0)
    n=n/2;
    while(n%3==0)
    n=n/3;
    while(n%5==0)
    n=n/5;
    
    return n==1; //if n is 1, it is ugly num
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_ugly(n))
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
}