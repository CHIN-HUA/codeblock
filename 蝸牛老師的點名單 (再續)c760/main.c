#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[1000];
    while(scanf(" %s", &arr) != EOF)
    {
        arr[0] -= 32;
        puts(arr);
    }
    return 0;
}
