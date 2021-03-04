#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n = 0;
    while(scanf("%d", &a) != EOF)
    {
        n = a * a - a + 2;
        printf("%d\n", n);
    }
    return 0;
}
