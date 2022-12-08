#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,amount,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    amount=p*(pow((1+r/100),t));
    ci=amount-p;
    printf("%0.2lf",ci);
}