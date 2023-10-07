#include<iostream>
using namespace std;
class A
{
	public:
		void showA()
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
		void showB()
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
	pa->showA();
	//pa->showB();
	pa->disp();
	pa=&y;
	pa->showA();
	//pa->showB();
	pa->disp();
	pa=&x;
	/*pb->showA();
	pb->showB();
	pb->disp();
	pb=&x;*/
	pb->showA();
	pb->showB();
	pb->disp();
	pb=&y;
	return 0;
}
