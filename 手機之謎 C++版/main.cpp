#include<iostream>

using namespace std;
void dfs( int );

int ans[10]={0};//����
int b[10]={0};//�Ʀr�}��
int n;


int main()
{
	while(cin>>n)
	{
		dfs(0);
	}

	return 0;
}

void dfs(int x )// x ��ܦ�m
{
	int i ;

	//��X�æ^��
	if (x==n)
	{
		for(i=0;i<n;i++)
		{
			cout<<ans[i];
		}
		cout<<endl;
		return;
	}

	for(i=n;i>=1;i--)// i ��ܼƦr�X �q�j���ƶ}�l
	{
		if(b[i]==0)//�p�G i �Ʀr�}�����} �N��ans�b x ����m�N�O i
		{
			b[i]=1;//���୫�������}��
			ans[x]=i;//ans�b x ����m�� i
			dfs(x+1);//�A���I�s
			b[i]=0;//�}�����} ���U���ϥ�
		}
	}
}


