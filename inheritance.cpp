#include<iostream>
using namespace std;
class Base
{
    public:
    int pub=10;

    protected:
    int pro=20;

    private:
    int pvt=30;

    public:
    int getPvt()
    {
        return pvt;
    }
};
class Child:public Base
{
    public:
    int getPro()
    {
        return pro;
    }
};
int main()
{
    Child object1; 
    cout << "Private = " << object1.getPvt() << endl; 
    cout << "Protected = " << object1.getPro() << endl; 
    cout << "Public = " << object1.pub << endl;
    return 0;

}