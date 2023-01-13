#include <stdio.h>

int main() 
{
    int hurl, spin, speed, grade;
    scanf("%d %d %d", &hurl, &spin, &speed);

    if (hurl > 50 && spin > 60 && speed > 100) 
    {
        grade = 10;
    } 
    else if (hurl > 50 && spin > 60)
    {
        grade = 9;
    } 
    else if (spin > 60 && speed > 100) 
    {
        grade = 8;
    } 
    else if (hurl > 50 && speed > 100) 
    {
        grade = 7;
    } 
    else if (hurl > 50 || spin > 60 || speed > 100)
    {
        grade = 6;
    } 
    else
    {
        grade = 5;
    }
    printf("%d", grade);
}
