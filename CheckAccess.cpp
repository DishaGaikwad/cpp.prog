#include<iostream>
using namespace std;
class CheckAccess
{
private:
    int apple=1;

protected:
    int kiwi=2;

    
public:
   int banana=3;
public:
    int fruits()
    {
        return apple;
    }

};

class ChildClass : CheckAccess
{
    public:
    int taste()
    {
        return kiwi;
    }

    int color()
    {
        return banana;
    }
    
};
int main()
{
    ChildClass obj;
  //  obj.fruits();
    obj.taste();
    obj.color();
  //  cout<<"From private :"<<obj.fruits()<<endl; //private can not be accessed
    cout<<"From prtected :"<<obj.taste()<<endl;
    cout<<"From public :"<<obj.color()<<endl;
}
