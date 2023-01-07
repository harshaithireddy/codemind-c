#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sumX=0,sumY=0,turn=0;


    for(i=0; i<n; i++)
    {
        if(turn == 0)
        {
            sumX = sumX+a[i];
            turn = 1;
        }
        else
        {
            sumY = sumY+a[i];
            turn = 0;
        }
    }

    int diff = sumX-sumY;
    if(diff<0)
    {
        diff = -diff;
    }

    if(diff%4 == 0)
    {
        printf("X
");
    }
    else
    {
        printf("Y
");
    }
}
