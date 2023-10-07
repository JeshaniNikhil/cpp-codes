#include<iostream>
using namespace std;
int main()
{
    int i,num,max,min,count;
    cout<<"enter starting number:";
    cin>>min;
    cout<<"enter ending number:";
    cin>>max;
    num=min;
    while(num<=max)
    {
        i=2;
        count=0;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count==0&&num!=1)
    {
            cout<<num<<endl;
    }
    num++;
    }
    return 0;
}