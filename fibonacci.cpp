#include<iostream>
using namespace std;
int main()
{
	int a=-1;
	int b=1,i,n,s;
	cout<<"enter ending";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=a+b;
		cout<<s<<" ";
		a=b;
		b=s;
	}
	return 0;
}

