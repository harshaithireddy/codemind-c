#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%6==0)
        count++;
    }
    printf("%d ",count);
}