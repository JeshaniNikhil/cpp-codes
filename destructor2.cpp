#include<iostream>
using namespace std;
class A
{
static int a;
public:
    A()
    {
	a++;
	cout<<"\n object created";
	}	
	~A()
	{
		a--;
		cout<<"\n object destroyed";
	}
};
int A::a;
int main()
{
	A a1;
	A a2;
	{
	A a3;
	}
A a4;	
	{
		A a5;
	}
	A a6;
	return 0;
}
