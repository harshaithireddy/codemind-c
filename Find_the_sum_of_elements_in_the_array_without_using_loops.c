#include <stdio.h>

int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    if(n>=1 && n<=30)
    {
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        printf("%d", sum);
    }
    else
    {
        printf("Enter a valid number");
    }
}
