#include<iostream>
using namespace std;
class A1
{
    
    public:
    int id1=20;
    int fromParentOne()
    {
        cout<<"Parent one id is: "<<id1<<endl;
    }
};
class A2
{   public:
    int id2=30;
    
    int fromParentTwo()
    {
        cout<<"Parent two id is: "<<id2<<endl;
    }
};
class B : public A1,A2
{
    char name[20]="Child_class";
    public:
    int fromChild()
    {
        cout<<"Child class name is: "<<name<<endl;
    }
  
};
int main()
{
    B obj;
    obj.fromChild();
    obj.fromParentOne();
   //obj.fromParentTwo();
    //cout<<"from A1 :"<<obj.id2;
   // cout<<"from A2 :"<<obj.id1;
   // cout<<"from B :"<<obj.name;
    return 0;

}