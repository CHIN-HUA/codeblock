#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;

void Strings(int num);
int stringMaxWords(char str[],int row);
void bubbleSort(int Bmax,int row);

char arr[1000][1000];

int main()
{
	int x;
	cout<<"Please input a number:";
	cin>>x;
	for(int i=0;i<=x;i++){
    	cin.getline(arr[i],1000);
    }
	cout<<endl; 
	Strings(x);
}

void Strings(int num) //���ͤG���ʺA�}�C 
{
	char ** array;
	array=(char**)malloc(num*sizeof*array); //num�C 
	
	int Max = stringMaxWords(*arr,num);
	
	for(int i=0;i<num;i++) //Max��  
	{  
		*(array+i)=(char*)malloc(Max*sizeof**array);
    }
    
    bubbleSort(Max,num);
    
    for(int i=0;i<num;i++) //�Narray"arr"�ƻs��array"array" 
	{
		for(int j=0;j<Max;j++)
		{
			array[i][j]=arr[i+1][j];
			cout << array[i][j];
		}
		cout << endl;
	}
    cout<<"Max="<<Max<<endl;
    //���� 
    for(int i=0;i<num;i++)
	{
		free(*(array+i));
	}
	free(array);
    
}

int stringMaxWords(char str[],int row) //��X�}�C�r�ꤤ �r�Ƴ̪��� 
{ 
	int max=0;
	int temp;
	for(int i=0;i<=row;i++){
		int count=0;
		for(int j=0;j<1000;j++){
			if(arr[i][j] != '\0'){  //�YŪ����r��,count++
				count++;
				}
			else if(arr[i][j] == '\0'){  //�Y��Ū����r��,���X�j�� 
				break;
				}
			//cout<<count<<endl;
		}
		if(count>max){
			temp=count;
			count=max;
			max=temp;
		}
	}
	return max;
}

void bubbleSort(int Bmax,int row)
{
	int i=0,j=0;
	for(int k=0;k<Bmax;k++)
	{
		for(i=0;i<row;i++)
		{
			int j=0;
			if( int(arr[i][j]) > int(arr[i+1][j]) )
			{
				for(j=0;j<Bmax;j++)
				{
					char temp=*(*(arr+i)+j);
					arr[i][j]=arr[i+1][j];
					arr[i+1][j]=temp;
				}
			}
		}
	}
	
	/*for(int i=0;i<=row;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}*/
}
