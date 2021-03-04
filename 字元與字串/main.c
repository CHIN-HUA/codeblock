#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100] = "computer", b[100] = "science", c[100], *ptr;

    //printf("%s\n", strcpy(c, b));
    //printf("%u\n", strlen(c));
    //printf("%u\n", strlen(a) + strlen(b));
    //printf("%c%s", toupper(a[6] + &b[1]));
    printf("%s", strcat(strcat(strcpy(c, a), " and "), b));


    return 0;
}
