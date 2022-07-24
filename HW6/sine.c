#include <stdio.h>

double powa(double n, int pw)
{
    for(int i=0; i<pw; i++)
    {
        n=n*n;
    }
    return n;
}

int fac(int n)
{
    int temp=1;
    for(int i=0; i<temp; i++)
    {
        temp=temp*i;
    }
    return temp;
}

int main(){
    int n=20;
    double sine, siner;
    scanf("%lf", &sine);
    siner=sine;
    for(int i=0; i<n; i++)
    {
        siner=((powa(-1, i))/(2*i+1))*powa(sine, 2*i+1);
    }
    printf("%lf\n", siner);
    return 0;
}