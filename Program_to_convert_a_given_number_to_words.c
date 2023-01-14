#include<stdio.h>
void print_tens(int n)
{
    switch(n) 
    {
        case 2: printf("twenty ");
        break;
        case 3: printf("thirty "); 
        break;
        case 4: printf("forty "); 
        break;
        case 5: printf("fifty ");
        break;
        case 6: printf("sixty "); 
        break;
        case 7: printf("seventy ");
        break;
        case 8: printf("eighty ");
        break;
        case 9: printf("ninety ");
        break;
    }
}

void print_ones(int n)
{
    switch(n) {
        case 1: printf("one ");
        break;
        case 2: printf("two ");
        break;
        case 3: printf("three "); 
        break;
        case 4: printf("four ");
        break;
        case 5: printf("five ");
        break;
        case 6: printf("six "); 
        break;
        case 7: printf("seven "); 
        break;
        case 8: printf("eight "); 
        break;
        case 9: printf("nine ");
        break;
    }
}

void print_teens(int n)
{
    switch(n)
    {
        case 10: printf("ten "); 
        break;
        case 11: printf("eleven "); 
        break;
        case 12: printf("twelve "); 
        break;
        case 13: printf("thirteen "); 
        break;
        case 14: printf("fourteen "); 
        break;
        case 15: printf("fifteen "); 
        break;
        case 16: printf("sixteen "); 
        break;
        case 17: printf("seventeen ");
        break;
        case 18: printf("eighteen "); 
        break;
        case 19: printf("nineteen ");
        break;
    }
}

void print_number(int n)
{
    if(n>=1000)
    {
        print_ones(n/1000);
        printf("thousand ");
        n=n%1000;
    }
    if(n>=100)
    {
        print_ones(n/100);
        printf("hundred ");
        n=n%100;
    }
    if(n>=20)
    {
        print_tens(n/10);
        n=n%10;
    }
    if(n>=10)
    {
        print_teens(n);
    }
    else
    {
        print_ones(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_number(n);
}
