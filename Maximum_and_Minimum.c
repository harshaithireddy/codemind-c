#include<stdio.h>
int main()
{
    int n,i,j,flag=0,min,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int cnt=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            cnt++;
        }
        if(cnt==a[i])
        {
            if(flag==0)
            {
                flag=1;
                min=a[i];
                max=a[i];
            }
            else
            {
                if(a[i]>max)
                max=a[i];
                else if(a[i]<min)
                min=a[i];
            }
        }
    }
    if(flag==0)
    printf("-1");
    else
    printf("%d %d",min,max);
}