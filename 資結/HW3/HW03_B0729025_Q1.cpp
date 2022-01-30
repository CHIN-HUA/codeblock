#include<iostream>
using namespace std;
class Currency
{
	public:
		Currency(){
			dollars=0;
			cents=0;
			sum=0;}
		bool SetDollars(int Dollars);
		bool SetCents(double Cents);
		void SetSum(double Sum){sum=Sum;}
		int GetDollars(){return dollars;}
		double GetCents(){return cents;}
		double GetSum(){return dollars+cents;}
		void input();
		void output();
		friend Currency operator +(Currency&A,Currency&B);
		friend Currency operator -(Currency&A,Currency&B);
		friend Currency operator *(Currency&A,double num);
		friend istream& operator>>(istream&inputStream,Currency&AllDollars){
			AllDollars.input();
			return inputStream;
		}
		friend ostream& operator<<(ostream&outputStream,Currency&AllDollars){
			AllDollars.output();
			return outputStream;
		}
	private:
		int dollars;
		double cents;
		double sum;
};

bool Currency::SetDollars(int Dollars)
{
	dollars=Dollars;
	if(dollars>=0)
		return true;
	else return false;
}

bool Currency::SetCents(double Cents)
{
	cents=Cents/100;
	if(cents>=0.0&&cents<1.0)
		return true;
	else return false;
}

Currency operator +(Currency&A,Currency&B)
{
	Currency Result;
	Result.dollars=A.dollars+B.dollars;
	Result.cents=A.cents+B.cents;
	return Result;
}

Currency operator -(Currency&A,Currency&B)
{
	Currency Result;
	Result.dollars=A.dollars-B.dollars;
	Result.cents=A.cents-B.cents;
	return Result;
}

Currency operator *(Currency&A,double num)
{
	Currency Result;
	Result.dollars=A.dollars*num;
	Result.cents=A.cents*num;	
	return Result;
}

void Currency::input()
{
	int DOLLARS,CENTS;
	for(;;)
	{
		cout<<"Please input dollars:";
		cin>>DOLLARS;
		if(DOLLARS<0)
			cout<<"Input ERROR!!!(dollars>0)"<<endl;
		else
		{
			SetDollars(DOLLARS);
			break;
		}
	}
	
	for(;;)
	{
		cout<<"Please input cents:";
		cin>>CENTS;
		if(CENTS<0||CENTS>99)
			cout<<"Input ERROR!!!(0<=cents<100)"<<endl;	
		else
		{
			SetCents(CENTS);
			break;
		}
	}
}

void Currency::output()
{
	cout<<GetSum()<<endl;
}

int main()
{
	Currency A,B,all;
	
	A.SetDollars(70.5);
	A.SetCents(20);
	cout<<"A:";
	cout<<A;
	cout<<"B:";
	B.SetDollars(6);
	B.SetCents(51);
	B.output();
	cout<<endl;
	
	cin>>A;
	cout<<"Currency A:";
	A.output();
	B.input();
	cout<<"Currency B:";
	B.output();
	cout<<endl;
	
	all=A+B;
	cout<<"A+B="<<all.GetSum()<<endl;
	all=A-B;
	cout<<"A-B="<<all.GetSum()<<endl;
	all=A*2.5;
	cout<<"A*2.5="<<all.GetSum()<<endl;
	all=B*2.0;
	cout<<"B*2.0="<<all.GetSum()<<endl;
}
