#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) //8 3
    {
        printf("%d.", a / b); // 2.
        a = a % b; //

        while(c--) //计
        {
            a = a * 10; // 砆埃计ぃ耞干0
            printf("%d", a / b); //计
            a = a % b;
        }
    }
    printf("\n");
    retrurn 0;
}







