#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()
		{
			cout<<"\n show base class A";
		}
		void disp()
		{
			cout<<"\n disp base class A";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"\n show derived class B";
		}
		void disp()
		{
			cout<<"\n disp derived class B";
		}
};
int main()
{
	A x,*pa;
	B y,*pb;
	pa=&x;
	pa->show();
	pa->disp();
	pa=&y;
	pa->show();
	pa->disp();
	/*pb=&x;
	pb->show();
	pb->disp();*/
	pb=&y;
	pb->show();
	pb->disp();
	return 0;
}
