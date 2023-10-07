#include<iostream>
using namespace std;
class A
{
	int a1,a2;
	public:
	A(int x,int y):a1(x),a2(2*y)
	{
		cout<<"\n Base Constructor";	
	}	
	void dispA()
	{
		cout<<"\n a1="<<a1<<"\t a2="<<a2;	
	}
};
class B:public A
{
	int b1,b2;
	public:
	 B(int a,int b,int c,int d):A(a,b),b1(c)
	 {
	 	cout<<"\n Derive Constructor";
	 	b2=d;
	 }
	 void dispB()
	 {
	 	cout<<"\n b1="<<b1<<"\t b2="<<b2;
	 }
};
int main()
{
	B x(10,15,20,25);
	x.dispA();
	x.dispB();
	return 0;
}
