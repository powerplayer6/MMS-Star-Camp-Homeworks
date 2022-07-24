#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <limits.h>

int secondMax(const int* arr, size_t n)
{
    int temp1, temp2;
    temp1=arr[0];
    temp2=arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>temp1)
        {
            temp1=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>temp2 && arr[i]!=temp1)
        {
            temp2=arr[i];
        }
    }
    return temp2;
}


int main()
{
    int sm;
    int arr[] = {12, 34, 5, 70, 46 };
    sm = secondMax(arr, 5);
    printf("%d\n", sm);
    return 0;
}