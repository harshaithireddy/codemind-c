#include <stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int nums[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);
    }
    
    for(i=0; i<n; i++)
    {
        int n=nums[i];
        int digits = 0;
        while(n>0)
        {
            digits++;
            n=n/10;
        }
        if(digits%2 == 0)
        {
            count++;
        }
    }
    printf("%d
", count);
}
