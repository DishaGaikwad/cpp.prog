#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Base class A CONSTRUCTOR"<<endl;
    }
    ~A()
    {
        cout<<"BAse class A DISTRUCTOR"<<endl;
    }
};
class B: public A
{
    public:
    B()
    {
        cout<<"Base class B CONSTRUCTOR"<<endl;
    }
    ~B()
    {
        cout<<"Bsse class B DISTRUCTOR"<<endl;
    }
};
class C: public B
{
    public:
    C()
    {
        cout<<"Base class C CONSTRUCTOR"<<endl;
    }
    ~C()
    {
        cout<<"BAse class C DISTRUCTOR"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}