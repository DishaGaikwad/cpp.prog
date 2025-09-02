#include<iostream>
using namespace std;
class Base
{
    public:
    void fun()
    {
        cout<<"Base class :"<<endl;
    }
};
class ParentOne: public Base
{
    public:
};
class ParentTwo: public Base
{
    public:
};
class Child:public ParentOne,public ParentTwo
{

};
int main()
{
    Child* obj = new Child();
    obj->fun(); // Abiguity arises, as Child now has two copies of fun()
    return 0;
}