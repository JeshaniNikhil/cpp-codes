#include<iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
int main()
{
int a,b,c,d,e;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
d = add(a,b);
e = add(a,b,c);
cout<<"\n Addition of Two Numbers="<<d;
cout<<"\n Addition of Three Numbers="<<e;
return 0;
} 
int add(int a,int b)
{
return(a+b);
} 
int add(int a, int b, int c)
{
return(a+b+c);
}
