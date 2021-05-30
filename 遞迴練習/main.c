#include <stdio.h>
#include <stdlib.h>

void hahaha(int a)
{

    puts("hahaha");

    a--;
    if(a > 0)
    {
        hahaha(a);

    }
    printf("²Ä%d¼hhahaha\n", a);

}

int main()
{
    hahaha(5);
    return 0;
}
