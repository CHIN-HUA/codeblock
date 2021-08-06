#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, n, a, b;
    x = y = 0;
    scanf(" %d", &n);
    while(n--)
    {
        scanf(" %d%d", &a, &b);

        switch(a)
        {
            case 0:
                y += b;
                break;
            case 1:
                x += b;
                break;
            case 2:
                y -= b;
                break;
            case 3:
                x -= b;
                break;
        }
    }
        printf("%d %d\n", x, y);

    return 0;
}
