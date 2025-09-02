#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cout<<"this is default constructor of class A "<<endl;
    }
    A(int p)
    {
        cout<<"this is para constructor of class A "<<endl;
    }
};
class B
{

    int b;
    public:
    B()
    {
        cout<<"this is default constructor of class B"<<endl;
    }
    B(int q)
    {
        cout<<"This is para constructor of class B"<<endl;
    }
};
class C:public A,public B
{
    public:
    C(int p,int q):A(p),B()
    {
        cout<<"this is para contructor of class C"<<endl;
    }  

};
int main()
{
    C c(20,30);
    return 0;
}