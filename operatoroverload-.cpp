//overload unary - operator using member function
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	void get()
	{
	cout<<"enter a,b:";
	cin>>a>>b;	
	}	
	void put()
	{
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	}
	void operator -()
	{
		a=-a;
		b=-b;
	}
};
int main()
{
  A a1;
  a1.get();
  cout<<"\n before -a1";
  a1.put();
  cout<<"\n after -a1";
  -a1;
  a1.put();
  return 0;
}
