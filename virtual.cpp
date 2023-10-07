#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getA()
		{
		cout<<"\n Enter a:";
		cin>>a;
		}
		void putA()
		{
		cout<<"\n a = "<<a;
		}
	
};
class B:virtual public A
{
	int b;
	public:
	void getB()
	{
	cout<<"\nEnter B:";
	cin>>b;	
	}	
	void putB()
	{
		cout<<"\n b="<<b;
	}
};
class C:public virtual A
{
		int c;
	public:
		void getC()
		{
		cout<<"\nEnter c:";
		cin>>c;
		}
		void putC()
		{
		cout<<"\n c = "<<c;
		}

};
class D:public B,public C
{
	int d;
	public:
		void getD()
		{
		cout<<"\nEnter d:";
		cin>>d;
		}
		void putD()
		{
		cout<<"\n d = "<<d;
		}
};
int main()
{
	D x;
	x.getA();
	x.getB();
	x.getC();
	x.getD();
	x.putA();
	x.putB();
	x.putC();
	x.putD();
	return 0;
}
