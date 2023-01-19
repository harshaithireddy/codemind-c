#include <stdio.h>

void moveZeroes(int* nums, int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if (nums[i]!=0)
        {
            nums[j]=nums[i];
            if (i!=j)
            {
                nums[i]=0;
            }
            j++;
        }
    }
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
    
    moveZeroes(nums, n);
    for(i=0;i<n;i++)
    {
        printf("%d ", nums[i]);
    }
}
