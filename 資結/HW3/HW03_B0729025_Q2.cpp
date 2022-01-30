#include<iostream>
using namespace std;
class String
{
	public:
		String(char*init,int m){//Constructor that initializes *this to string init of length m.
			Lstr=init; //array
			lengthS=m;}
		void Frequency();
		bool repeat(int ch);
	private:
		char *Lstr;
		int lengthS;
};

bool String::repeat(int ch)
{
	for(int i=0;i<ch;i++)
	{
		if(Lstr[ch]==Lstr[i])
			return true;
	}
	return false;
}

void String::Frequency()
{
	for(int i=0;i<lengthS;i++)
	{
		int times=0;
		if(repeat(i)==false)
		{
			for(int j=0;j<lengthS;j++)
			{
				if(Lstr[i]==Lstr[j])
					times++;
			}
			cout<<Lstr[i]<<":"<<times<<" times,"<<(float)times/lengthS*100<<"%"<<endl;
		}
	}
}

int main()
{
	char strA[6]={'a','a','b','c','c','c'};
	
	char *str;
	str=strA;	
	String A(str,6);
	A.Frequency();
}

