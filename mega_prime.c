#include<stdio.h>
#include<math.h>
int isprime(int n);
int megaprime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))
	{
		if(megaprime(n))
		{
			printf("Mega Prime");
		}
		else
		{
			printf("Not Mega Prime");
		}
		
	}
	else
	{
		printf("Not Mega Prime");
	}
	
}
int isprime(int n)
{
    
	int	cnt=0,i;
	for(i=1;i<=n;i++)
	{

		if(n%i==0)
		{
			cnt=cnt+1;			
		}
	}
	return cnt==2;
}
int megaprime(int n)
{
	int i=0,flag=0,temp=0;
    if(isprime(n)==0)
    {
        return 0;
    }
    else
    {
        while (n!=0)
        {
            temp=n%10;
            flag=isprime(temp);
            if(flag==0)
                return 0;
            n=n/10;
        }
    }
    if(flag==1)
        return 1;
    else 
        return 0;
}