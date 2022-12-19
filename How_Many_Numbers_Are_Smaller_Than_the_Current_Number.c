#include <stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  
  int nums[n];
  for(i=0; i<n; i++)
  {
    scanf("%d",&nums[i]);
  }

  int counts[n];
  for(i=0; i<n; i++)
  {
      scanf("%d",&counts[i]);
  }
  for (i=0; i<n; i++)
  {
    int count = 0;
    for(j=0; j<n; j++)
    {
      if(nums[j] < nums[i])
      {
        count++;
      }
    }
    counts[i] = count;
  }
  for(i=0; i<n; i++)
  {
    printf("%d ", counts[i]);
  }
}
