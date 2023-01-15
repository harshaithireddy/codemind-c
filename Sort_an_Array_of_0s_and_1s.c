#include<stdio.h>
void segregate(int arr[], int n)
{
    int left=0,right=n-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right) 
        {
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }
}

int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    segregate(arr,n);
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
