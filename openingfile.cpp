#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string nm;
	int rn;
	ofstream outf("E:\\c++\\demo1.txt");
	cout<<"enter roll no & name of the student:";
	cin>>rn>>nm;
	outf<<rn<<"\n";
	outf<<nm<<"\n";
	outf.close();
	ifstream inf("E:\\c++\\demo1.txt");
	inf>>rn;
	inf>>nm;
	cout<<"\n roll no="<<rn<<"\n name="<<nm;
	inf.close();
	return 0;
}

