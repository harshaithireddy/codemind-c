#include<stdio.h>
int main()
{
    int a,b,i,t=0;
    scanf("%d%d",&a,&b);
    for(i=2;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            t=i;
        }
    }
    if(t!=0)
    {
        printf("%d",t);
    }
    else
    {
        printf("1");
    }
    
}