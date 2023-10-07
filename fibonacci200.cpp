#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,s,n,i;
	cout<<"enter ending";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	s=a+b;
	cout<<(s+200)<<" ";
	a=b;
	b=s;		
	}
	return 0;
}
