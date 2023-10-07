#include <iostream>
#include <sstream>
using namespace std;
class my
{
  private:
  int age;
  string fnm,lnm;
  int std;
  public:
  void inp()
  {
      cin>>age;
      cin>>fnm;
      cin>>lnm;
      cin>>std;
  }
  void out()
  {
      cout<<age;
      cout<<fnm;
      cout<<lnm;
      cout<<std;
  }
};
int main() 
{
    my obj;
    obj.inp();
    obj.out();
    return 0;
}