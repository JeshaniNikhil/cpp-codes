//Calculator in CPP
#include<iostream>
using namespace std;
int main()
{
    char choice;
    int a,b;
    cout<<"Welcome"<<endl;
    while(1)
    {
        cout<<endl<<"-----CALCULATOR----"<<endl;
        cout<<"Enter TWO Numbers"<<endl;
        cout<<"First Number:"<<endl;
        cin>>a;
        cout<<"Second Number:"<<endl;
        cin>>b;
        cout<<endl<<"Please Select Your Choice"<<endl;
        cout<<"(1) + Addition"<<endl;
        cout<<"(2) - Substraction"<<endl;
        cout<<"(3) * Multiplication"<<endl;
        cout<<"(4) / Division"<<endl;
        cout<<"(5) % Modulas"<<endl;
        cout<<"Press 6 for exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case '+':
                cout<<"Answer:"<<a+b;                                
                break;
                case '-':
                cout<<"Answer:"<<a-b;                                
                break;
                case '*':
                cout<<"Answer:"<<a*b;                                
                break;
                case '/':
                cout<<"Answer:"<<a/b;                                
                break;
                case '%':
                cout<<"Answer:"<<a%b;                                
                break;    
                case 6:
                exit(0);
        }
    }
    return 0;   
}