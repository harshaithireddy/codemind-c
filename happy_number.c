#include<stdio.h>
int main()
{
    int n,temp,r,s=0;
    scanf("%d",&n);
    temp=n;
    while(temp>9)
    {
        s=0;
        while(temp!=0)
        {
            r=temp%10;
            s=s+r*r;
            temp=temp/10;
        }
        if(s>9)
        temp=s;
    }
    if(s==1 || s==7)
    printf("True");
    else
    printf("False");
}