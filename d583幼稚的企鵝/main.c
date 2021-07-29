#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,s;

    while(scanf(" %d", &n) != EOF)
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &s);
            printf("%d ", i);
        }
        puts("");
}

}
