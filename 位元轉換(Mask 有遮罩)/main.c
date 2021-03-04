#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int x;

    printf("%s", "Enter a nonnegative int: ");
    scanf("%u", &x);

    displayBits(x);

    return 0;
}

void displayBits(unsigned value)
{
    unsigned c;

    int unsigned displayMask = 1 << 31;
    // 1000000 00000000 00000000 00000000

    printf("%10u = ", value);

    for(c = 1; c <= 32; c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;

        if(c % 8 == 0) putchar(' ');
    }

    putchar('\n');
}

// 65000 = 00000000 00000000 11111101 11101000
