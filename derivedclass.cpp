#include<iostream>
using namespace std;
class parent
{
    protected:
    int id_protected;
};
class child:public parent
{
    public :
   void setId(int id)
   {
    int id_protectd=id;
   }
   void display_id()
   {
        cout<<"id_protectd is"<<id_protected<<endl;
   }
   
};
int main()
{
    child obj1;
   obj1.setId(81);
   obj1.display_id();
}