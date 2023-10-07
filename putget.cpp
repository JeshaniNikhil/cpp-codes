//put an dget function
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter content of the file (ctrl + z) to terminate \n ";
	fstream f;
	f.open("E:/c++/putget123.txt",ios::in|ios::out);
	cin.get(c);
	while(c!=EOF)
	{
		f.put(c);
		c=cin.get();		
	}
	f.seekg(0);
	cout<<"\n content of the file \n";
	while(f)
	{
		f.get(c);
		cout<<c;
	 } 
	 f.close();
	return 0;
}
