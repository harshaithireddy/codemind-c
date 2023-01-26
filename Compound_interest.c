#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    ci=p*pow((1+(r/100)),t);
    printf("%0.2lf",ci);
}