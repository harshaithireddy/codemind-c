#include <stdio.h>
int main() {
    int n,i;
    scanf("%d", &n);
    
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int A,B;
    scanf("%d %d",&A,&B);

    int count=0;
    for(i=0;i<n;i++)
    {
        if (a[i]<A || a[i]>B)
        {
            printf("%d ",a[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
}
