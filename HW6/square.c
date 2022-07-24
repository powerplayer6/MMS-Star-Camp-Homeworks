#include <stdio.h>
int main()
{
    int number;

    printf("Number: \n");
    scanf("%d", &number);

    float sqrt=number/2, temp = 0;

    while(sqrt!=temp)
    {
        temp=sqrt;
        sqrt=(number/temp + temp)/2;
    }
    printf("Square root: %f\n", sqrt);
    return 0;
}