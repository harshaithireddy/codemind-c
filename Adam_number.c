#include<stdio.h>
#include<math.h>
int is_adam(int n);
int rev(int n);
int sq(int n);

int main()
{
    int n;
    scanf("%d",&n);
    if(is_adam(n))
    printf("True");
    else
    printf("False");
}
int is_adam(int n)
{
    int square=sq(n);
    int rev_sq=sq(rev(n));
    return square==rev(rev_sq);
}
int rev(int n)
{
    int reverse=0;
    while(n>0)
    {
        reverse=reverse*10+n%10;
        n=n/10;
    }
    return reverse;
}
int sq(int n)
{
    return n*n;
}