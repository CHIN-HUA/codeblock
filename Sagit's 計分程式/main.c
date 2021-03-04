#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    while(scanf("%d", number))
    {
        for(int i = 0; i < number; i++)
        {
            int num[100], count1 = 0, count2 = 0, count3 = 0;
            scanf("%d", &num[i]);

        if(num[i] % 3 == 0)
        {
            count1++;
        }
        else if(num[i] % 3 == 1)
        {
            count2++;
        }
        else if(num[i] % 3 == 2)
        {
            count3++;
        }

        }
        printf("%d %d %d", count1, count2, count3);
    }
return 0;
}
