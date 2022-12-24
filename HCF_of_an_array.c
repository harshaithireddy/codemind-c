#include<stdio.h>
int main()
{
    int n,i,j,hcf,min,k,co=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(k=min;k>0;k--)
    {
        co=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%k==0)
            co++;
        }
        if(co==n)
        {
            hcf=k;
            break;
        }
    }
    printf("%d",hcf);
}