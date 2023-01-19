#include <stdio.h>
#include <stdlib.h>

int majorityElement(int* nums, int n)
{
    int count=0,i;
    int majority=nums[0];

    for(i=0;i<n;i++)
    {
        if(count==0)
        {
            majority = nums[i];
            count++;
        }
        else if(majority==nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return majority;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    
    int nums[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    
    printf("%d",majorityElement(nums,n));
}
