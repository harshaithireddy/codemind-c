#include<stdio.h>
int main()
{
    int t,n,i,sum,total;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n-1];
        sum=0;
        
        for(i=0; i<n-1; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        total=(n*(n+1))/2;

        printf("%d
", total-sum);
    }
}
