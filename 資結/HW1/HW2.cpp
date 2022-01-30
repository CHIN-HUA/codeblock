#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void Strings(int num);
int stringMaxWords(char str[],int row);

char arr[1000][1000];

int main()
{
	int x;
	
	cout<<"Please input a number:";
	cin>>x;
	for(int i=0;i<=x;i++)
    {
    	cin.getline(arr[i],1000);
    }
	Strings(x);	
}

void Strings(int num)
{
    //產生二維動態陣列  
	char ** array;
	array=new char*[num]; //num列 
	
	int Max = stringMaxWords(*arr,num);
	
	for(int i=0;i<num;i++) //Max行 
	{  
		array[i] = new char [Max];
    }
    
    for(int i=0;i<num;i++) //將"arr"複製到"array" 
	{
		for(int j=0;j<Max;j++)
		{
			array[i][j]=arr[i+1][j];
			cout << array[i][j];
		}
		cout << endl;
	}
    cout<<"Max="<<Max<<endl;
    
	int space=0;
    for(int i=0;i<num;i++)//計算spaceMax 
    {
    	int count=1;
    	for(int j=0;j<Max;j++)
    	{
    		if(array[i][j] !=' ')
    			count++;
			else if(array[i][j] ==' ')
			{
				break;
			}
			//cout<<"count = "<<count<<endl;
		}
		if(count>space)
		{
			int temp=count;
			count=space;
			space=temp;
		}
		cout<<"space = "<< space;
		cout<<endl;
	}

	//cout<<"space = "<<space;
	//cout<<endl;
	///////////////////對齊空白///////////////////////////
	for(int i=0;i<num;i++)///對齊
    {
    	int count=1;
    	for(int j=0;j<Max;j++)//計算每一列空格位置 
    	{
    		if(array[i][j] !=' ')
    			count++;
    		else if(array[i][j] ==' ')
    			break;
    		///cout<<"空格位置 = "<<count<<endl;///
		}
		if(count<space)
		{
			int plus=space-count;
			
			int total=0;
			for(int j=0;j<1000;j++) ///計算字串總長
			{
				if(array[i][j] != '\0' || array[i][j] == ' ')
				{
					total++;
				}
				else if(array[i][j] == '\0')
				{
					break;
				}
			}
			//cout<<"total = "<<total<<endl;////
			cout<<"plus = "<<plus<<endl;
			for(int j=total-1;j>=0;j--)//對齊 
			{
				array[i][j+plus]=array[i][j];
				//cout<<"plus = "<<plus<<endl;
				
			}
			for(int k=0;k<plus;k++)
				{
					array[i][k]=' ';
					//cout<<"k = "<<k<<endl;	
				}
		}
		else if(count==space)
			continue;
	}
	
	cout << endl;
	for(int i=0;i<num;i++)//印出結果 
	{
		for(int j=0;j<Max;j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	//釋放 
	for(int i=0;i<num;i++){
		delete [] *(array+i);
	}
	delete [] array;
}

int stringMaxWords(char str[],int row) //陣列最長需要幾格 
{ 
	int frontMax=0,backMax=0;
	int maxLenth=0;
	//frontMax
	for(int i=1;i<=row;i++)
	{
		int front=0;
		for(int j=0;j<1000;j++)
		{
			if(arr[i][j] != ' ')
			{
				front++;
			}
			else if(arr[i][j] == ' ')
			{
				break;
			}
			//cout<<"1 "<<front<<endl;//
		}
		if(front>frontMax)
		{
			int temp=front;
			front=frontMax;
			frontMax=temp;
		}
	}
	//cout<<"0 "<<frontMax<<endl;//
	//backMax
	for(int i=1;i<=row;i++)
	{
		int total=0;
		for(int j=0;j<1000;j++) 
		{
			if(arr[i][j] != '\0' || arr[i][j] == ' ')
			{
				total++;
			}
			else if(arr[i][j] == '\0')
			{
				break;
			}
			///cout<<"1 "<<total<<endl;/////
		}
		
		int front=0;
		for(int j=0;j<1000;j++)
		{
			if(arr[i][j] != ' ')
			{
				front++;
			}
			else if(arr[i][j] == ' ')
			{
				break;
			}
			///cout<<"2 "<<front<<endl;/////
		}
		int back=total-front;
		///cout<<"3 "<<back<<endl;/////
		if(back>backMax)
		{
			int temp=back;
			back=backMax;
			backMax=temp;
		}
		///cout<<"4 "<<backMax<<endl;/////
		cout<<endl;///////
	}
	maxLenth=frontMax+backMax;
	return maxLenth;
}

