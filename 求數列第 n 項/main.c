#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int H1, M1, H2, M2, time;
    while(n--)
    {
        scanf("%d %d %d %d %d", &H1, &M1, &H2, &M2, &time );
        M1 += H1 * 60 + time;
        M2 += H2 * 60;
        puts(M1 > M2 ? "No" : "Yes");
    }
    return 0;
}
