#include<iostream>
using namespace std;
class Test
{   
    public:
    Test()
    {
        cout<<"constructor is called :";
    }
    ~Test()
    {
        cout<<"Distructor is called :";
    }
};
int main()
{
    Test t,t1;
   t.~Test();
   t1.~Test();
}
