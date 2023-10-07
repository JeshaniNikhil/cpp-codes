#include<iostream>
using namespace std;
int strlen1(const char *s);
int main()
{
char *s;
int l;
cout<<"Enter a string:";
cin>>s;
l = strlen1(s);
cout<<"\n Length="<<l;
return 0;
}
int strlen1(const char *s)
{
int i;
for(i=0;s[i]!='\0';i++);
return i;
}
