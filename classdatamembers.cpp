#include<iostream>
using namespace std;
class parent
{
    public:
    int id_p;

};
class child : public parent
{
    public:
    int id_c;
};
int main()
{
    parent obj1;
    obj1.id_p = 91;
    //obj1.id_c =81;
   // cout<<"child class is="<<obj1.id_c<<'\n';//error
    cout<<"parent class is="<<obj1.id_p<<'\n';
    cout<<sizeof(obj1);
}