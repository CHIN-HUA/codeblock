#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    while(scanf(" %d%d", &k, &n) != EOF)
    {

        if(n==0&&k==0)
            puts("Ok!");
        else if (n==0)
            puts("Impossib1e!");
        else if(k%n==0&&n!=0)
                puts("Ok!");
        else
            puts("Impossib1e!");
    }
    return 0;
}
