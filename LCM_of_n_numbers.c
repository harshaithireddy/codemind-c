#include<stdio.h>

int gcd(int a,int b) 
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b) 
{
    return (a*b)/gcd(a,b);
}

int findLcm(int arr[],int n)
{
    int result=arr[0],i;
    for(i=1; i<n; i++) 
    {
        result=lcm(arr[i],result);
    }
    return result;
}

int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",findLcm(arr, n));
}
