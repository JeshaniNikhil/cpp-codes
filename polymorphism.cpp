#include<iostream>
using namespace std;
class A
{
    int n1,n2,s,m;
public:
void person()
{
    cout<<"Enter Two Number";
    cin>>n1>>n2;
    s=n1+n2;
    cout<<"Addition:"<<s<<endl;
}
void person(int a,int b)
{
m=a*b;
cout<<"Multiplication:"<<m<<endl;
}
};
int main()
{
A obj;
obj.person();
obj.person(10,20);
return 0;
}