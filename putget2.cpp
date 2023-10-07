//put and get function
#include<iostream>
using namespace std;
int main()
{
	char c;
	int c1;
	cout<<"enter line of text:\n";
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		cin.get(c);
		c1++;
	}
	cout<<"\n no of characters entered="<<c1;
	return 0;
}
