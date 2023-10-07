#include<iostream>
using namespace std;
int main()
{
    float per;
    cout<<"enter percentage:";
    cin>>per;
    switch (int(per)/10)
    {
    case 10:
    case 9:
    cout<<"Distinsion";
    break;
    case 8:
    case 7:
    cout<<"First Class";
        break;
        case 6:
        case 5:
cout<<"pass class";
break;
case 4:
case 3:
case 2:
case 1:
cout<<"fail";
break;
    default:
    cout<<"invalid input";
        break;
    }
    return 0;
}