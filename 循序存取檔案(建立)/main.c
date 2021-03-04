#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int account;
    char name[30];
    double balance;

    FILE *cfPtr;

    if((cfPtr = fopen("clients.dat", "w")) == NULL)
    {
        puts("file cound not be opened");
    }
    else
    {
        puts("Enter the account, name, and balance");
        puts("Enter EOF to end input.");
        printf("%s", "? ");
        scanf("%d%29s%1f", &account, name, &balance);


    while(!feof(stdin))
    {
        fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
        printf("%s", "? ");
        scanf("%d%29s%1f", &account, name, &balance);
    }

    fclose(cfPtr);
    }
    return 0;
}
