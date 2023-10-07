#include<iostream>
using namespace std;
class my{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
};
int main()
{
my obj;
 obj.a=10;
// obj.b=20;
//obj.c=30;
cout<<obj.a<<endl;
// cout<<obj.b<<endl;
// cout<<obj.c<<endl;
return 0;
}
