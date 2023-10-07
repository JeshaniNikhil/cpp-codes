#include<iostream>
#include<math.h>
using namespace std;
class FD
{
	long int p;
	int n;
	float r,amt;
	public:
	FD(long int p1,int n1,float r1);
	FD(long int p1,int n1,int r1);
	void disp()
	{
		cout<<"\n p="<<p<<"\n n="<<n;
		cout<<"\n r="<<r<<"\n amt="<<amt;
	}
};
FD::FD(long int p1,int n1,float r1){
	p=p1;
	n=n1;
	r=r1;
	amt=p*pow((1+r),n);
}
FD::FD(long int p1,int n1,int r1)
{
	p=p1;
	n=n1;
	r=r1;
	amt=p*pow((1+r/100),n);
}
int main()
{
	long int p;
	int n,r;
	float r1;
	cout<<"enter p,n,r(float)";
	cin>>p>>n>>r1;
	FD fd1(p,n,r1);
	cout<<"enter p,n,r(int)";
	cin>>p>>n>>r;
	FD fd2(p,n,r);
	fd1.disp();
	fd2.disp();
		return 0;
}
