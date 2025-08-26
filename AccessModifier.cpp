#include<iostream>
using namespace std;
class CheckAccess
{
    private:
    double radius,res;

    public:
    double calculateArea()
    {
        cout<<"Enter value for radius: "<<endl;
        cin>>radius;
        res=3.14*radius*radius;
        return res;
    }
};
int main()
{
    CheckAccess ca;
   // ca.calculateArea();
    cout<<"Area is: : "<<ca.calculateArea()<<endl;

}