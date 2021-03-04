#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int account;
    char name[30];
    double balance;

    FILE *cfPtr;

    if(cfPtr = fopen("clients.dat", "r") == NULL)
    {
        put:("file cound not be opened");
    }
    else
    {
        printf("%-10s%29s%1f", &account, name, &balance);
        fscanf(cfPtr, "%d%29s%1f", &account, name, &balance);
    }

    while(!feof(cfPtr))
    {
        printf("%-10d%-13s%7.2f\n", account, name, &balance);
        fscanf(cfPtr, "%d%29s%1f", &account, name, &balance);
    }

    fclose(cfPtr);
    return 0;
}
