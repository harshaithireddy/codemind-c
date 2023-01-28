#include<stdio.h>
int main()
{
    int n,max_count=0,count=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            if(count>max_count)
            {
                max_count=count;
            }
        }
        else
        {
            count=0;
        }
    }
    printf("%d", max_count);
}
