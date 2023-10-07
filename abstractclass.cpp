#include<iostream>
using namespace std;
class A
{
    virtual void my()=0;
};
class dog:public A
{
public:
void my()
{
    cout<<"hii i am dog";
}
};
int main()
{
    dog obj;
    obj.my();
    return 0;
}