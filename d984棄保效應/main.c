#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c;
    while(scanf(" %lld%lld%lld", &a, &b, &c) != EOF)
    {
        if((a > b + c) || (b > a && a > c && a + c > b) || (c > a && a > b && a + b > c))
        {
            puts("A");
        }
        else if((b > a + c) || (a > b && b > c && b + c > a) || (c > b && b > a && b + a > c))
        {
            puts("B");
        }
        else
        {
            puts("C");
        }
    }
    return 0;
}
