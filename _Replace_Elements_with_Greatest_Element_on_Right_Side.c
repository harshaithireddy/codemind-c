#include <stdio.h>

void replaceElements(int* arr,int arrSize)
{
    int i,max=-1;
    for(i=arrSize-1;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=max;
        if(temp>max)
        {
            max=temp;
        }
    }
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
    replaceElements(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
