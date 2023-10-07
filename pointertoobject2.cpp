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
		cout<<"\n a="<<a<<"\n b="<<b;
	}
};
const int size=2;
int main()
{
	A *p=new A[size];
	A *d=p;
	int x,i;
	float y;
	for(i=0;i<size;i++)
	{
		cout<<"input an int and a float value:";
		cin>>x>>y;
		p->getdata(x,y);
		p++;
	}
	for(i=0;i<size;i++)
	{
		cout<<"\n object:"<<i+1;
		d->putdata();
		d++;
	}
	return 0;
}
