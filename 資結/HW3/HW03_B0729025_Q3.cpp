#include<iostream>
using namespace std;
class String
{
	public:
		String(char*init,int m){//Constructor that initializes *this to string init of length m.
			Lstr=init; //array
			lengthS=m;}
		String CharDelete(char c);
		String FrontCharDelete(char c);
		void output();
	private:
		char *Lstr;
		int lengthS;
};

String String::CharDelete(char ch)
{
	for(int i=0;i<lengthS;i++)
	{
		if(Lstr[i]==ch)
		{
			Lstr[i]=' ';
		}
	}
	String test(Lstr,lengthS);
	return test;
}

void String::output()
{
	for(int i=0;i<lengthS;i++)
	{
		cout<<Lstr[i];
	}
}

String String::FrontCharDelete(char c)
{
	int count=0;//計算陣列中非' '的數目 
	for(int i=0;i<lengthS;i++)
	{
		if(Lstr[i]!=' ')
			count++;
	}
	
	char STR[count];
	int pos=0;
	for(int j=0;j<count;j++)
	{
		for(int i=pos;i<lengthS;i++)
		{
			pos++;
			if(Lstr[i]!=' ')
			{
				STR[j]=Lstr[i];
				break;
			}
		}
	}
	for(int i=0;i<count;i++)
	{
		cout<<STR[i];
	}
	String test(STR,count);
	return test;
}

int main()
{
	char strA[6]={'a','d','b','b','a','c'};
	
	char *str;
	str=strA;
	String A(str,6);
	A.CharDelete('a');
	A.output();
	cout<<endl;
	A.FrontCharDelete('a');
}
