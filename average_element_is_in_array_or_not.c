#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    int avg=sum/n;
    int found=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            found=1;
            break;
        }
    }

    if(found==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
