#include<iostream>
using namespace std;
class A
{
	float a,b;
	public:
		A(float x,float y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		operator float()
		{
			return(a+b);
		}
};
int main()
{
	A x(10,20);
	x.display();
	float y=x;
	cout<<"\n Sum="<<y;
	return 0;
}
