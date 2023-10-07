#include<iostream>
using namespace std;
class A
{
	 int a;
	  public:
	  A(int x)
	  {
	  	cout<<"\n base consructor";
	  	a=x;
	  }
	  void dispA()
	  {
	  	cout<<"\n a="<<a;
	  }
};
class B:public A
{
	int b;
	public:
		B(int x,int y):A(x)
		{
			cout<<"\n Drived Constructor";
			b=y;			
		}
		void dispB()
		{
			cout<<"\n b="<<b;
		}
};
int main()
{
	B x(10,20);
	x.dispA();
	x.dispB();
	return 0;
} 
