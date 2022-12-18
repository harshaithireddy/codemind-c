#include <stdio.h>
int main() 
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    int strictly_odd=1;       // assume the array is strictly odd
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
    if (array[i] % 2 == 1)
    {
      if (i % 2 == 0)
      {
        strictly_odd = 0; 
        break;
      }
    }
  }

  if(strictly_odd==1)
  {
    printf("True");
  }
  else
  {
    printf("False");
  }
}
