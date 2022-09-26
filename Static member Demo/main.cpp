#include <iostream>

using namespace std;

class Test
{
  public:
      int a;
      static int count;

      Test() //constructor
      {
          a = 10;
          count++;
      }
  static int getCount() //function only take static data
  {
      return count;
  }
};

int Test :: count=0; // global variable (in this case only static member can access

int main()
{
    Test t1,t2;
    /*cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;*/
    cout<<Test::getCount()<<endl;
    cout<<t1.getCount()<<endl;
    return 0;
}
