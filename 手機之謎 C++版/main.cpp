#include<iostream>

using namespace std;
void dfs( int );

int ans[10]={0};//答案
int b[10]={0};//數字開關
int n;


int main()
{
	while(cin>>n)
	{
		dfs(0);
	}

	return 0;
}

void dfs(int x )// x 表示位置
{
	int i ;

	//輸出並回傳
	if (x==n)
	{
		for(i=0;i<n;i++)
		{
			cout<<ans[i];
		}
		cout<<endl;
		return;
	}

	for(i=n;i>=1;i--)// i 表示數字幾 從大的數開始
	{
		if(b[i]==0)//如果 i 數字開關打開 代表ans在 x 的位置就是 i
		{
			b[i]=1;//不能重複關閉開關
			ans[x]=i;//ans在 x 的位置為 i
			dfs(x+1);//再次呼叫
			b[i]=0;//開關打開 做下次使用
		}
	}
}


