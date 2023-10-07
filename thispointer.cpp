//this pointer
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getdata(int a)
		{
			this->a=a;
		}
		void putdata()
		{
		cout<<"\n a="<<a;	
		}
		A max(A y)
		{
		if(y.a>a)
		return y;
		else
		return *this;		
		}		
};
int main()
{
	 int x1,x2;
	 cout<<"enter two integer values:";
	 cin>>x1>>x2;
	 A x,y,z;
	 x.getdata(x1);
	 y.getdata(x2);
	 x.putdata();
	 y.putdata();
	 z=x.max(y);
	 z.putdata();
	return 0;
}
