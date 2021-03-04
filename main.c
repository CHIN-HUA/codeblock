#include <stdio.h>

int main()
{
    int n = 0; // 块计
    int count_math = 0; // 魁Ωよ计
    bool last = 0; //琌程计

    while(scanf("%d", n) != EOF)
    {
        for(int i = 2; i <= n; i++)
        {
            while(n % i == 0)
            {
                count_math++;
                n = n / i;

                if(n == 1) // n == i が埃1
                {
                    last = 1 //程计
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
                    printf("%d", i); //Τ1Ωよ
                }

                if(last == 1)
                {
                    printf("\n");
                }
            }
            else
            {
                printf("*"); //Τ1Ωよ
            }
        }

    }


 return 0;
}
