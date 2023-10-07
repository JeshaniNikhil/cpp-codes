#include<iostream>
#include<fstream>
using namespace std;
int main()
{
float f[]={12.3,23.4,34.5,45.6};
fstream f1;
f1.open("rdwr.txt",ios::in|ios::out);
f1.write((char*)&f,sizeof(f));
f1.seekg(0);
for(int i=0;i<4;i++)
{
	f[i]=0;
}
f1.read((char*)&f,sizeof(f));
for(int i=0;i<4;i++)
cout<<endl<<f[i];
return 0;
}
