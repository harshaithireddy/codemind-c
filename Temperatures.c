#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int temperatures[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&temperatures[i]);
    }

    int days[n];
    for(i=0;i<n;i++)
    {
        j=i+1;
        while(j<n && temperatures[j]<=temperatures[i]) 
        {
            j++;
        }
        if(j==n)
        {
            days[i] = 0;
        }
        else
        {
            days[i]=j-i;
        }
    }

    for(i=0;i<n;i++) 
    {
        printf("%d ",days[i]);
    }
}
