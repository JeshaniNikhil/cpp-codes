#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    if(a<b&&b>a)
    {
        cout<<"a is less than b and also b is greter than a"<<endl;
    }
    if(a>b||b>a)
    {
        cout<<"b is bigger than a"<<endl;
    }
    printf (" a is not equal to b but this is logical not = %d \n", ! (a == b));
    return 0;
} 