#include<stdio.h>
#include<stdlib.h>

int n,i,j,a[100],b[100],max,maxi;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    max=b[0];
    maxi=0;
    for(i=1;i<=n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            maxi=i;
        }
        else if(b[i]==max && i<maxi)
            maxi=i;
    }
    printf("%d",maxi);
}
