#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getA()
		{
			cout<<"\n enter a:";
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
			cout<<"\n enter b:";
			cin>>b;
		}
		void putB()
		{
			cout<<"\n b="<<b;
		}
};
int main()
{
	A x;
	B y;
	x.getA();
	//x.getB();
	y.getA();
	y.getB();
	x.putA();
	//x.putB();
	y.putA();
	y.putB();
	return 0;
}

