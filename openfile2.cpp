#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	ofstream outf;
	outf.open("country.txt");
	outf<<"india \n"<<"USA \n"<<"UK \n";
	outf.close();
	outf.open("capital.txt");
	outf<<"new delhi \n"<<"washinhgton \n"<<"london \n";
	outf.close();
	ifstream inf;
	inf.open("country.txt");
	cout<<"\n content of country.txt file\n";
	while(inf)
	{
		inf.getline(name,19);
		cout<<name<<endl;
	}
	inf.close();
	inf.open("capital.txt");
	cout<<"\n content of capital.txt file \n";
	while(inf)
	{
		inf.getline(name,19);
		cout<<name<<endl;
	}
	inf.close();
	return 0;
}
