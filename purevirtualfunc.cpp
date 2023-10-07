#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()=0;
};
class B:public A
{
	public:
	void show()
	{
	cout<<"\n show B";		
	}	
};
int main()
{
//	A a1;
	A *pa1;
	B b1;
	pa1=&b1;
	pa1->show();
	return 0;
}
