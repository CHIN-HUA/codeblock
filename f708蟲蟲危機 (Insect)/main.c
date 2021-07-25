#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int animal=0;
    int sharp=0;
    while(scanf(" %d%d", &num1, &num2) != EOF)
    {

        for(int i = 1; i <= num1; i++)
        {
            int a;
            scanf(" %d",&a);
            animal += a;
        }


        for(int j = 1; j <= num2; j++)
        {
            int b;
            scanf(" %d",&b);
            sharp += b;
        }

        if(num1 > num2 && animal > sharp )
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}
