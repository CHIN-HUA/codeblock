#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    while(scanf(" %d", &n) != EOF)
    {
        n = ((1 + n) * n )/2;
        printf("%d", n);
        n = 0;
    }
    return 0;
}
