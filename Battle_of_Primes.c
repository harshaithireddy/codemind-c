#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if(n<=1)
    return false;
    
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

int main()
{
    int n1,n2,n3=1;
    scanf("%d%d",&n1,&n2);
    
    while(!is_prime(n1+n2+n3))
    n3++;
    
    printf("%d
", n3);
}
