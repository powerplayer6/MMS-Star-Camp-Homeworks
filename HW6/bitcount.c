#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <float.h>
#include <limits.h>

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...)
{
    int test=0;
    int broj=0;
    int mask;
    va_list args;
    va_start(args, bitscnt);
    for(int i=0; i<count; i++)
    {
        mask=va_arg(args, int);
        for(int j=0; j<sizeof(int)*__CHAR_BIT__-1; j++)
        {
            //printf("%d\n", !!(mask&(1<<j)));
            if(!!(mask&(1<<j)))
            {
                broj++;
            }
        }
        if(broj==bitscnt)
        {
            test++;
        }
        broj=0;
    }
    return test;
}

int main()
{
    printf("%u\n", bitsNCount(3, 2, 0b0011, 0b0011, 0b0001));
    return 0;
}