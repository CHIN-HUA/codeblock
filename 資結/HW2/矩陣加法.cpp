/*
double START,END;
    START = clock();
    ---�n�p�⪺�{���Ĳv�ϰ�---
    END = clock();
cout << (END - START) / CLOCKS_PER_SEC << endl;
*/

#include <iostream>
#include <time.h> 
using namespace std;

void Add(int **a,int **b,int **c,int m,int n);

int main()
{
	int **A;
	int **B;
	int **C;
	int m=3580;
	int n=100;
	
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
		Add(A,B,C,m,n);
		END = clock();
		
		cout<< n << " "<< (END - START) / CLOCKS_PER_SEC <<endl;
		n=n+99;
		
		delete []A;
		delete []B;
		delete []C;
	}
}

void Add(int **a,int **b,int **c,int m,int n)
{
	int num=0;
	for(int i=0;i<m;i++)
	{
		num++;
		for(int j=0;j<n;j++)
		{
			num++;
			c[i][j]=a[i][j]+b[i][j];
			num++;
		}
		num++;
	}
	num++;
	//cout<<num<<" "<<endl;
}
