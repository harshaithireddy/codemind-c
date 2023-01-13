#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    int i;
    if(n<=1)
    return false;
    for(i=2; i*i<=n; i++) 
    {
        if(n%i == 0) 
        return false;
    }
    return true;
}

int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(is_prime(i))
        {
            printf("%d
", i);
        }
    }
}
