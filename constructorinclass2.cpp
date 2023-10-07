#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int x)
		{
			cout<<"\n Base Constrctor";
			a=x;
		}
		void dispA()
		{
			cout<<"\n a="<<a;
		}
};
class B
{
	int b;
	A m;
	public:
		B(int x,int y):m(x)
		{
	     cout<<"\n Derived Constructor";
	     b=y;
		}
		void dispB()
		{
			m.dispA();
			cout<<"\n b="<<b;
		}
};
int main()
{
	B x(10,20);
	x.dispB();
	return 0;
}
