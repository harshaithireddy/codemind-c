#include <stdio.h>
long long aVeryBigSum(int n, long long arr[]);

int main()
{
    int n,i;
    scanf("%d",&n);
    long long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lldd",&arr[i]);
    }
    printf("%lld
", aVeryBigSum(n,arr));
}

long long aVeryBigSum(int n, long long arr[])
{
    long long sum=0;
    int i;
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
