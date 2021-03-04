#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int count = 0;
  while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            int a, b;
                scanf("%d %d",&a, &b);
                for(int k = a; k <= b; k++)
                {
                    for(int j = 1; j <= sqrt(k); j++)
                    {
                        if(k == j * j)
                        {

                            count = count + k;
                        }

                    }
                }
                printf("Case %d: %d\n",i, count);
count = 0;
        }



    }

    return 0;
}





