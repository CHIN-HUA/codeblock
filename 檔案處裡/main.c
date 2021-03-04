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
        printf("檔案不能打開\n");
    }
    else{
        printf("請輸入帳號, 姓名, 存款.\n");
        printf("請輸入<ctrl>+z建來結束.\n");
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
