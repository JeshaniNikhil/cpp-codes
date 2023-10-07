#include<iostream>
using namespace std;
class A
{
	int a;
	protected:
		int a1;
		public:
			void getA()
			{
				cout<<"\n Enter a:";
				cin>>a;
				cout<<"\n Enter a1:";
				cin>>a1;
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
				cout<<"\n Enter B:";
				cin>>b;
			}
			void putB()
			{
				cout<<"\n B="<<b<<"\n a1="<<a1;
			}
};
int main()
{
	B b1;
	b1.getA();
	b1.putA();
	b1.getB();
	b1.putB();
	return 0;
}
