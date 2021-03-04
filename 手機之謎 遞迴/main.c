#include <stdio.h>
#include <stdlib.h>

void DFS(int);

int ans[10] = {0}; // 回達
int bin[10] = {0}; // 數字開關
int n;

int main()
{
    while(scanf("%d", &n) != EOF)
    {
        DFS(0);

    }
     return 0;
}

void DFS(int x )
{
    int i;

    if(x == n) //歸零時輸出
    {
        for(i = 0; i < n; i++)
        {
            printf("%d", ans[i]);
        }
        printf("\n");
        return;
    }

    for(i = n; i >= 1; i--) // i 表示數字幾 從大的數開始
    {
        if(bin[i] == 0) //如果 i 數字開關打開 代表ans在 x 的位置就是 i
        {
            bin[i] = 1; //不能重複關閉開關
            ans[x] = i; //ans在 x 的位置為 i
            DFS(x + 1); //再次呼叫
            bin[i] = 0; //開關打開 做下次使用

        }
    }
}
