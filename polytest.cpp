#include<iostream>
using namespace std;
class A
{
	public:
	virtual void disp()
	{
		cout<<"dispA";
	}	
};
class B:public A
{
	public:
	void disp()
	{
		cout<<"dispB";
	}	
};
int main()
{
	B a1;
	a1.disp();
	return 0;
}
