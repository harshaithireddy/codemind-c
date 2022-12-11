#include<stdio.h>
int main()
{
    float b,h,d,pf,gr;
    scanf("%f%f%f",&b,&h,&d);
    pf=b*12/100;
    gr=b+h+d+pf;
    printf("%0.2f
%0.2f",pf,gr);
}