#include<iostream>
using namespace std;
class A
{
	int a;
	float b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void putdata()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
int main()
{
	A x;
	A *p=&x;
	p->getdata(25,52.5);
	p->putdata();
	return 0;
}
