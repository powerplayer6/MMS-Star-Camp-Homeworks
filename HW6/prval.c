#include <stdio.h>
#include <stdint.h>
#define TINT 1
#define TCHAR 2
#define TDBL 3
#define TFLT 4
#define TUI8 5
#define TUI16 6
#define TUI32 7
#define TUI64 8

void printValue(const void* valuePtr, uint8_t flag)
{
    switch(flag)
    {
        case TINT:
            printf("%d\n",*(int*)valuePtr);
            break;
        case TCHAR:
            printf("%c\n",*(char*)valuePtr);
            break;
        case TDBL:
            printf("%lf\n",*(double*)valuePtr);
            break;
        case TFLT:
            printf("%f\n",*(float*)valuePtr);
            break;
        case TUI8:
            printf("%lu\n",*(uint8_t*)valuePtr);
            break;
        case TUI16:
            printf("%lu\n",*(uint16_t*)valuePtr);
            break;
        case TUI32:
            printf("%lu\n",*(uint32_t*)valuePtr);
            break;
        case TUI64:
            printf("%lu\n",*(uint64_t*)valuePtr);
            break;
        default:
            break;
    }
}

int main()
{
    int num = 23;
    printValue(&num, TINT);
    double numa = 3.14;
    printValue(&numa, TDBL);
    char symbol = 'a';
    printValue(&symbol, TCHAR);
    return 0;
}