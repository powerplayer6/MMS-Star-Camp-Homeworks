#include <stdio.h>

unsigned sumArrayDigits(const int* arr, size_t n)
{
    int a, b;
    unsigned sum=0;
    for(int i=0;i<n;i++)
    {
        a=arr[i]/10;
        b=arr[i]%10;
        sum+=(a+b);
    }
    return sum;
}

int main()
{
    int arr[] = {12, 34, 5, 70};
    printf("%u\n", sumArrayDigits(arr, 4));
    return 0;
}