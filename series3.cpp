#include<iostream>
using namespace std;
int main()
{
	int a=0,b=2,n,i;
	cout<<"enter ending:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";
		a=a+b;
		b=b+2;
	}
	return 0;
}
