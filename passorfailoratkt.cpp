#include<iostream>
using namespace std;
int main()
{
    int maths,sci,eng,count=0;
    cout<<"enter maths:";
    cin>>maths;
    cout<<"enter science:";
    cin>>sci;
    cout<<"enter english:";
    cin>>eng;
    if(maths>=40&&sci>=40&&eng>=40)
    {
       cout<<"pass";
    }
    if(maths<40||sci<40||eng<40)
    {
        count++;
    }
    if(maths<40&&sci<40&&eng<40)
    {
        count++;
    }
    if(count==1)
    {
        cout<<"atkt";
    }
    if(count==2)
    {
     cout<<"fail";
    }
    return 0;
}