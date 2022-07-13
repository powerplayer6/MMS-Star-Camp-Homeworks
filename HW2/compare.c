#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d",&a);
    b = a;
    for(int i=0; i<2; i++)
    {
        scanf("%d",&a);
        if(a>b)
        {
            b=a;
        }
    }
    printf("Largest: %d\n",b);
    return 0;
}