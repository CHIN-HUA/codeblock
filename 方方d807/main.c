#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    if(a == b) return a;
    if(b==0) return a;
    else return GCD(b,a%b);//13-9=4 9-4*2=1 4-1*4=0
}


int main()
{
    int a, b;
    while(scanf(" %d%d", &a, &b) != EOF)
    {
        printf("%d\n",GCD(a, b));
    }
    return 0;
}
