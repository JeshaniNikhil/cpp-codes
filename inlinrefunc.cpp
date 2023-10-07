#include<iostream>
using namespace std;
inline int mul(int x,int y)
{
	return(x*y);
}
int main()
{
	int x,y,z;
	cout<<"enter value of x:";
	cin>>x;
	cout<<endl<<"enter value of y:";
	cin>>y;
	z=mul(x,y);
	cout<<endl<<"answer:"<<z;
	return 0;
}

