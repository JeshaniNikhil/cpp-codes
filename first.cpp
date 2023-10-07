//c++ basic structer
#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b;
    public:
    void get();
    void put()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
};
void demo::get()
{
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
}
int main()
{
    demo d1;
    d1.get();
    d1.put();
return 0;
}