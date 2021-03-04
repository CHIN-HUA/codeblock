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
			int count=1;//計數器

			scanf("%d%d", &n, &m);

			//j<(n+1)/2 繞一圈就有兩層 所以小於n+1/2 就可以了
			for(int j=0 ;j<(n+1)/2 ;j++) //繞幾圈
			{
				//j<(n+1)/2 同理 所以n - (j*2) -1;
				for(int k=0 ;k<n-j*2-1 ;k++) //上面
				{
					r[j][k+j]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//右邊
				{
					r[j+k][n-j-1]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//下面
				{
					r[n-j-1][n-j-k-1]=count++;
				}
				for(int k=0 ;k<n-j*2-1 ;k++)//左邊
				{
					r[n-j-k-1][j]=count++;
				}
			}

			if(n%2)//正中間
			{
				r[n/2][n/2] = count++;
			}

			//輸出
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					if(m==1)
					{
						printf("%6d", r[j][k]);//順時針
					}
					else
					{
						printf("%6d", r[k][j]);//逆時針 行列互換就好
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
