//one class type to another class type
#include<iostream>
using namespace std;
class invent2;
class invent1
{
		int code,items;
		float price;
		public:
			invent1(int a,int b,float c)
			{
				code=a;
				price=c;
			}
			void display()
			{
				cout<<"\n Code="<<code<<"\t Items="<<items<<"\t Price="<<price;
			}
			int getCode()
			{
				return code;
			}
			int getItems()
			{
				return items;
			}
			int getPrice()
			{
				return price;
			}
			operator float()
			{
			return (items*price);
			}
		/*	operator invent2()
			{
				invent2 temp;
				temp.code=code;
				temp.value=price*items;
				return temp;
			}*/
};
class invent2
{
	int code;
	float value;
	public:
		invent2()
		{
			code=0;
		}
		invent2(int x,float y)
		{
			code=x;
			value=y;
		}
		void display()
		{
			cout<<"\n code="<<code<<"\t value="<<value;
		}
		invent2(invent1 p)
		{
			code=p.getCode();
			value=p.getPrice()*p.getItems();
		}
};
int main()
{
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_value;
	total_value=s1;
	d1=s1;
	cout<<"\n Product Detail  - Invent 1 Type";
	s1.display();
	cout<<"\n product Detail  - invent 2 type ";
	d1.display();
	cout<<"\n stock value="<<total_value;
	return 0;
}
