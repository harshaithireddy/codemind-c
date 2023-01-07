#include <math.h>
#include <stdio.h>

int sumOfPerSq(int arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        int sqrt_i = sqrt(arr[i]);
        if(sqrt_i*sqrt_i == arr[i])
        {
            sum=sum+arr[i];
        }
    }
    return sum;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum=sumOfPerSq(arr,n);
    printf("%d",sum);
}
