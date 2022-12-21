#include <stdio.h>
#include <math.h>
int main()
{
    int num, orinum, rem, dig=0, sum=0;
    scanf("%d",&num);
    orinum = num;

    while (orinum != 0) {
        orinum = orinum/10;
        dig++;
    }

    orinum=num;

    // Calculate the sum of the digits powered with their respective position
    while (orinum != 0)
    {
        rem=orinum%10;
        sum = sum+pow(rem,dig--);
        orinum = orinum/10;
    }
    if (num == sum)
        printf("True");
    else
        printf("False");
}
