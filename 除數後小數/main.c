#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) //8 3
    {
        printf("%d.", a / b); // 2.
        a = a % b; //

        while(c--) //�p�ƫ�
        {
            a = a * 10; // �Q���ƫᤣ�_��0
            printf("%d", a / b); //�p��
            a = a % b;
        }
    }
    printf("\n");
    retrurn 0;
}







