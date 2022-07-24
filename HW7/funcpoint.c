#include <stdio.h>

int sumarr(int* arr, int cnt)
{
    int sum=0;
    for(int i=0;i<cnt; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

void arrayEvaluate(int* arr, size_t n, int(*f)(int*,int))
{
    printf("%d\n", f(arr, n));
}

int main()
{
    int (*sum)(int*, int) = &sumarr;
    int arr[] = {1, 2, 3};
    arrayEvaluate(arr, 3, sum);
    return 0;
}