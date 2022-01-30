/*
double START,END;
    START = clock();
    ---要計算的程式效率區域---
    END = clock();
cout << (END - START) / CLOCKS_PER_SEC << endl;
*/

#include <iostream>
#include <time.h> 
using namespace std;

void Multiply(int **a,int **b,int **c,int m,int n,int p);

int main()
{
	int **A;
	int **B;
	int **C;
	int m=3580;
	int n=100;
	int p=10;
	
	A=new int* [m];
	for(int i=0;i<m;i++)
	{
		A[i]=new int[n];
	}
	
	B=new int* [m];
	for(int i=0;i<m;i++)
	{
		B[i]=new int[n];
	}

	C=new int* [m];
	for(int i=0;i<m;i++)
	{
		C[i]=new int[n];
	}
		
	
	double START,END;
	
	for(int n=100;n<=3000;n++)
	{
		A=new int* [m];
		for(int i=0;i<m;i++)
		{
			A[i]=new int[n];
		}
		
		B=new int* [m];
		for(int i=0;i<m;i++)
		{
			B[i]=new int[n];
		}
	
		C=new int* [m];
		for(int i=0;i<m;i++)
		{
			C[i]=new int[n];
		}
		
		START = clock();
		Multiply(A,B,C,m,n,p);
		END = clock();
		
		cout<< n << " "<< (END - START) / CLOCKS_PER_SEC << endl;
		n=n+99;
		
		delete []A;
		delete []B;
		delete []C;
	}
}

void Multiply(int **a,int **b,int **c,int m,int n,int p)
{
	int num=0;
	for(int i=0;i<m;i++)
	{
		num++;
		for(int j=0;j<p;j++)
		{
			num++;
			c[i][j]=0;
			num++;
			for(int k=0;k<n;k++)
			{
				num++;
				c[i][j]+=a[i][k]*b[k][j];
				num++;	
			}
			num++;
		}
		num++;
	}
	num++;
	cout<<num<<" "<<endl;
}
