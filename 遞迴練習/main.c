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
    printf("��%d�hhahaha\n", a);

}

int main()
{
    hahaha(5);
    return 0;
}
