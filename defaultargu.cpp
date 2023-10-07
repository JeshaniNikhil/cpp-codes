#include<iostream>
using namespace std;
int add(int a,int b=30);
int main()
{
	int a,b,c,d;
	cout<<"enter a:";
	cin>>a;
	cout<<endl<<"enter b:";
	cin>>b;
    c=add(a,b);
    d=add(a);
    cout<<"\n Answer without default:"<<c;
cout<<"\nAnswer with default="<<d;
	return 0;
}
int add(int a,int b)
{
	return (a+b);	
}
