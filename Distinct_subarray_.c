#include<stdio.h>
int main()
{
    int l,r,i,j;
    scanf("%d%d",&l,&r);

    int odd_count=0;
    for(i=l; i<=r; i++)
    {
        int running_total=0;
        for(j=i; j<=r; j++)
        {
            running_total = running_total+j;
            if(running_total%2 == 1)
            {
                odd_count++; 
            }
        }
    }

    printf("%d
",odd_count);
}
