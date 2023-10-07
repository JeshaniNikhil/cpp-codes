#include<iostream>
using namespace std;
int count;
class A
{
     public:
    A()
    {cout<<"constructed";
        cout<<++count<<endl;
    }
    ~A()
    {
        cout<<"destructed";
        cout<<count--<<endl;
    }
};
int main()
{
    A o,p,q,r;
    return 0;
}

