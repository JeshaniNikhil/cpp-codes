#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getA()
		{
		cout<<"Enter a:";
		cin>>a;
		}
		void putA()
		{
		cout<<"\n a = "<<a;
		}
};
class B
{
	int b;
	public:
		void getB()
		{
		cout<<"Enter b:";
		cin>>b;
		}
		void putB()
		{
		cout<<"\n b = "<<b;
		}
};
class C:public A, public B
{
int c;
public:
void getC()
{
cout<<"Enter c:";
cin>>c;
}
void putC()
{
cout<<"\n c = "<<c;
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
