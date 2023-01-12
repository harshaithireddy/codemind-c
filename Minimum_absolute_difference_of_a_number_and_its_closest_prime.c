#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    if(num<2)
    {
        return 0;
    }
    for (int i=2; i<=sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int next_prime(int num)
{
    if (num<2)
    {
        return 2;
    }
    while(!is_prime(num))
    {
        num++;
    }
    return num;
}

int prev_prime(int num)
{
    if(num<2)
    {
        return 2;
    }
    num--;
    while(!is_prime(num))
    {
        num--;
    }
    return num;
}

int main()
{
    int N, next_p, prev_p, diff1, diff2;


    scanf("%d", &N);

    if (is_prime(N))
    {
        printf("0
");
        return 0;
    }

    next_p = next_prime(N);
    prev_p = prev_prime(N);

    diff1 = next_p - N;
    diff2 = N - prev_p;

    printf("%d
", (diff1<diff2) ? diff1 : diff2);
}
