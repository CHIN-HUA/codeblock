#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) //8 3
    {
        printf("%d.", a / b); // 2.
        a = a % b; //

        while(c--) //小數後
        {
            a = a * 10; // 被除數後不斷補0
            printf("%d", a / b); //小數
            a = a % b;
        }
    }
    printf("\n");
    retrurn 0;
}







