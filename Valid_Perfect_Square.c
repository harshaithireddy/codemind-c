#include<stdio.h>
int per_sq(int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(per_sq(n)==1)
        printf("True
");
        else
        printf("False
");
    }
}