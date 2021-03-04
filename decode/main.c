#include <stdio.h>
#include <stdlib.h>

int main()
{
    char decode[1000];
    while(scanf("%s", decode) != EOF)
    {
        for(int i = 0; decode[i] != '\0'; i++)
        {
            decode[i] = decode[i] - 7;
        }
        printf("%s\n", decode);
    }
    return 0;
}

