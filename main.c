#include <stdio.h>

int main()
{
    int n = 0; // ��J�Ʀr
    int count_math = 0; // ���������
    bool last = 0; //�O�_���̫᪺�Ʀr

    while(scanf("%d", n) != EOF)
    {
        for(int i = 2; i <= n; i++)
        {
            while(n % i == 0)
            {
                count_math++;
                n = n / i;

                if(n == 1) // n == i ������1
                {
                    last = 1 //�̫�@�ӼƦr
                }
            }

            if(count_math != 0)
            {
                if(count_math > 1)
                {
                    printf("%d^%d", i, count_math);
                }
                else
                {
                    printf("%d", i); //�u��1����
                }

                if(last == 1)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("*"); //�u��1����
            }
        }

    }


 return 0;
}
