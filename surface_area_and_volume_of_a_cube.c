#include<stdio.h>
int main()
{
    long double a;
    scanf("%Lf",&a);
    long double sa,vol;
    vol=a*a*a;
    sa=6.0*a*a;
    printf("Surface area = %0.2Lf and Volume = %0.2Lf",sa,vol);
}