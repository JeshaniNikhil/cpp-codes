#include<iostream>
using namespace std;
int main()
{
    int n,org,rev;
    cout<<"enter a number to check";
    cin>>n;
    org=n;
    while(n<0)
    {
        n=n%10;
        rev=rev*10+n;
        n=n/10;
    }
    if(org==rev)
    {
        cout<<"palindrom";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}