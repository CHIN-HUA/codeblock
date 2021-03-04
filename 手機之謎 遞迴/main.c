#include <stdio.h>
#include <stdlib.h>

void DFS(int);

int ans[10] = {0}; // �^�F
int bin[10] = {0}; // �Ʀr�}��
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

    if(x == n) //�k�s�ɿ�X
    {
        for(i = 0; i < n; i++)
        {
            printf("%d", ans[i]);
        }
        printf("\n");
        return;
    }

    for(i = n; i >= 1; i--) // i ��ܼƦr�X �q�j���ƶ}�l
    {
        if(bin[i] == 0) //�p�G i �Ʀr�}�����} �N��ans�b x ����m�N�O i
        {
            bin[i] = 1; //���୫�������}��
            ans[x] = i; //ans�b x ����m�� i
            DFS(x + 1); //�A���I�s
            bin[i] = 0; //�}�����} ���U���ϥ�

        }
    }
}
