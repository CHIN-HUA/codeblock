#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account;
    char name[8];
    double balance;
    FILE *cfPtr;
    if((cfPtr = fopen("first.dat", "w")) == NULL)
    {
        printf("�ɮפ��ॴ�}\n");
    }
    else{
        printf("�п�J�b��, �m�W, �s��.\n");
        printf("�п�J<ctrl>+z�بӵ���.\n");
        printf("?");
        scanf("%d%s%1f", &account, name, &balance);
        while(!feof( stdin )){
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("? ");
            scanf("%d%s%1f", &account, name, &balance);
        }
        fclose(cfPtr);
    }
        getchar();
    return 0;
}
