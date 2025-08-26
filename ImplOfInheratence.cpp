#include<iostream>
using namespace std;
class Parent
{
    public:
    int id1;
};
class Child:public Parent
{
    public:
    int id2;
};
int main()
{
    Child obj;
    obj.id1=70;
    obj.id2=80;
    cout<<"Child id1 is: "<<obj.id1<<endl;
    cout<<"Child id2 is:"<<obj.id2;
    cout<<sizeof(obj);
}