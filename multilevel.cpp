#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	void getA()
	{
	cout<<"\nEnter A:";
	cin>>a;	
	}
	void putA()
	{
		cout<<"\n a="<<a;
	}
};
class B:public A
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
class C:public B
{
	int c;
	public:
	void getC()
	{
	cout<<"\nEnter C:";
	cin>>c;	
	}	
	void putC()
	{
		cout<<"\n c="<<c;
	}
};
int main()
{
	C x;
	x.getA();
	x.getB();
	x.getC();
	x.putA();
	x.putB();
	x.putC();
	return 0;
}
