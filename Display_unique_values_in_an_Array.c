#include<stdio.h>
int main()
{
    int n,a[100],i,j,count,unique = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",a[i]);
            unique=1;
        }
    }
    if(unique==0)
    {
        printf("-1");
    }
}
