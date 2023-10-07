#include<iostream>
using namespace std;
class nikhil 
{
    private:
    string tv;
    public:
    void show()
    {
        tv="ipl 2023";
    }
    friend void my(nikhil r);
};
void my(nikhil r)
{
    cout<<"Watching_"<<r.tv;
}
int main()
{
    nikhil obj;
    obj.show();
    my(obj);
    return 0;
}