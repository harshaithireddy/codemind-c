#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s,ar;
    s=(a+b+c)/2.0;
    ar=s*(s-a)*(s-b)*(s-c);
    printf("%0.2f",sqrt(ar));
}