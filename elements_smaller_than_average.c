#include<stdio.h>
int main()
{
    int n,i,count = 0;
    float sum = 0, avg;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]);
        sum=sum+a[i]; 
        
    } 
    avg=sum/n; 
    for(i=0;i<n;i++) 
    { 
        if (a[i] <= avg) 
        {
            count++; 
            
        } 
        
    } 
    printf("%d",count);
    
}