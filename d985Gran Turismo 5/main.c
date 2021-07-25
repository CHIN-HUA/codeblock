#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int X[100];
    int Y[100];
    int best = 0;
    int average =0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        int n;
        scanf(" %d", &n);
        for(int j = 0; j < n; j++)
        {
            scanf(" %d%d", &X[j], &Y[j]);
            Y[j] = X[j] * 60 + Y[j];
        }

        best = Y[0];
        average = Y[0];

        for(int k = 1; k < n; k++)
        {
            if(Y[k]<best) best = Y[k];

            average += Y[k];
        }
        average /= n;

        printf("Track %d:\n", i);
        printf("Best Lap: %d minute(s) %d second(s).\n", best / 60, best % 60);
        printf("Average: %d minute(s) %d second(s).\n", average / 60, average % 60);
    }
    return 0;
}
