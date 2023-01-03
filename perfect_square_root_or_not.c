#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=sqrt(n);
    if(n==r*r)
    printf("True");
    else
    printf("False");
}