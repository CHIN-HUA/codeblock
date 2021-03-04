#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#define SIZE 20


int main()
{
    char string1[ SIZE ];
    char string2[] = "string literal";
    size_t i;

    printf("%s", "Enter a string(no longer than 19 characters):");
    scanf("%19s", string1);

    printf("string1 is : %s\n string2 is :%s\n"
           "string1 with spaces between characters is:\n",
           string1, string2);

    for(i = 0; i < SIZE && string1[i] != '\0'; ++i)
    {
        printf( "%c ", string1[ i ] );

    }
    puts("");

    return 0;
}






