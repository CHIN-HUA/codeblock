#include <stdio.h>
#include <stdlib.h>

union
{
    short name;
    char age[2];
}li;

int main()
{
    li.name = 0x1234;//用十六进制是因为一位十六进制数相当于四位二进制数

    printf("%x\n%x",li.age[0],li.age[1]);

    return 0;
}
