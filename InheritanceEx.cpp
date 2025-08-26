#include<iostream>
using namespace std;
class Area
{
    public:
    double radius, res;
    
    double area()
    {
        cout<<"enter value for radius: "<<endl;
        cin>>radius;
        res = 3.14*radius*radius;
        return res;
    }

};
int main()
{
    Area a;
    a.area();
    cout<<"Radius is: "<<a.radius<<endl;
    cout<<"Result is: "<<a.area();
}