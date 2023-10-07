#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,n,i;
	cout<<"enter ending:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";
		a=a+b;
		b=b+1;
	}
	return 0;
}
