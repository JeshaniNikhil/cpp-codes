#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void get()
		{
			cout << "Enter a:";
			cin >> a;
		}
		void put()
		{
			cout << "\n a=" << a;
		}
		friend A operator +(A a1,A a2);
		friend int operator ==(A a1,A a2);
};
A operator +(A a1,A a2)
		{
			A a3;
			a3.a = a1.a + a2.a;
			return a3;
		}
		int operator ==(A a1,A a2)
		{
			if(a1.a == a2.a)
				return 1;
			else
				return 0;
		}
int main()
{
	A a1, a2, a3;
	a1.get();
	a2.get();
	a3 = a1 + a2;
	a1.put();
	a2.put();
	a3.put();
	if(a1 == a2) 
	{
		cout << "\n Equal";
	}
	else
	{
		cout << "\n Not Equal";
	}
	return 0;
}

