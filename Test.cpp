#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        cout<<"in default of A"<<endl;
    }
};
class B:public A
{
    public:
    int b;
    B()
    {
        cout<<"constructor of B"<<endl;
    }
};
class C:public A
{
    public:
    int c;
    C()
    {
        cout<<"default constructor of C"<<endl;
    }
};
class D:public C,public B
{
        public:
        int d;
        D()
        {
            cout<<"default constructor of D"<<endl;
        }

};
int main()
{
    A aobj;
    B bobj;
    C cobj;
    D dobj;
    cout<<sizeof(aobj);

}