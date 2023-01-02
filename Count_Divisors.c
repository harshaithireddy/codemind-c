#include<stdio.h>
int main()
{
    int a,b,k,i,count=0;
    scanf("%d%d%d",&a,&b,&k);
    for(i=a;i<=b;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    printf("%d",count);
    
}