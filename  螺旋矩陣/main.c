#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,n,m;
	while(scanf("%d", &t) != EOF)
	{
		while(t--)
		{
			int r[100][100];
			int count=1;//�p�ƾ�

			scanf("%d%d", &n, &m);

			//j<(n+1)/2 ¶�@��N����h �ҥH�p��n+1/2 �N�i�H�F
			for(int j=0 ;j<(n+1)/2 ;j++) //¶�X��
			{
				//j<(n+1)/2 �P�z �ҥHn - (j*2) -1;
				for(int k=0 ;k<n-j*2-1 ;k++) //�W��
				{
					r[j][k+j]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//�k��
				{
					r[j+k][n-j-1]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//�U��
				{
					r[n-j-1][n-j-k-1]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//����
				{
					r[n-j-k-1][j]=count++;
				}
			}

			if(n%2)//������
			{
				r[n/2][n/2] = count++;
			}

			//��X
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					if(m==1)
					{
						printf("%6d", r[j][k]);//���ɰw
					}
					else
					{
						printf("%6d", r[k][j]);//�f�ɰw ��C�����N�n
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
