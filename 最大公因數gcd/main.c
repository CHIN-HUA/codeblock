#include <stdio.h>




int main() {
    int m = 0;
    int n = 0;

    while(scanf("%d %d", &m, &n))
    {
         printf("%d\n", gcd(m, n));
    }

    return 0;
}

int gcd(int m, int n)
{
    if(n == 0) {
        return m;
    }
    else {
        return gcd(n, m % n);
    }
}





