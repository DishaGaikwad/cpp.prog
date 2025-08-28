#include<iostream>
using namespace std;
class Account
{   
  
    float bonus =10000;
    public:
    int getBonus()
    {
        return bonus;
    }
};
class Programmer: public Account
{ 
    public:
    float salary=60000;
    void calculate()
    {
        cout<<"Total salary : "<<salary+getBonus();
    }

};
int main()
{
    Programmer p1;
    p1.getBonus();
    p1.calculate();
   // cout<<"Total salary : "<<p1.salary+getBonus();
   

}
