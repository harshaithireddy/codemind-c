#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp>9)
    {
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r;
            temp=temp/10;
            
        }
        if(sum>9)
        {
            temp=sum;
        }
        
    }
    if(sum==1||sum==7)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
        
    }
    
}