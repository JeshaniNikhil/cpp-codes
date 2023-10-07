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
		cout<<"\n b = "<<b;
		}
};
class C:public A
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
int main()
{
	B x;
	x.getA();
	x.getB();
//	x.getC();
	x.putA();
	x.putB();
//	x.putC();
C y;
	y.getA();
//	y.getB();
	y.getC();
	y.putA();
//	y.putB();
	y.putC();
	return 0;
}
