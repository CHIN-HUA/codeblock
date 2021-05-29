#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf(" %d", &n) != EOF)
    {
        if(n % 3 == 0) printf("YES");
        else printf("NO");
        puts("");
    }
    return 0;
}
