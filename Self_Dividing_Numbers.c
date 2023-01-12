#include <stdio.h>
int isSelfDividing(int num)
{
    int originalNum=num;
    while(num>0)
    {
        int digit=num % 10;
        if(digit==0 || originalNum%digit!=0)
        {
            return 0;
        }
        num=num/10;
    }
    return 1;
}

int main()
{
    int lower,upper,i;
    scanf("%d%d",&lower,&upper);
    for(i=lower;i<=upper;i++)
    {
        if(isSelfDividing(i))
        {
            printf("%d ", i);
        }
    }
}
