//object creation on heap with new operator without virtual keyword
#include<iostream>
using namespace std;
class employee
{
    int id;
    public:
    employee();
    employee(int);
   virtual void display();
   virtual int findsalary()
   {
        return 0;
   }
};
employee::employee()
{
    cout<<"In default of emp :"<<endl;
    id=0;
}
employee::employee(int i)
{
    cout<<"In para of emp :"<<endl;
    id=i;
}
void employee::display()
{
    cout<<"Id of an emp :"<<id<<endl;
}
class wageemployee:public employee
{
    int hrs,rate;
    public:
    wageemployee();
    wageemployee(int,int,int);
    void display();
    int findsalary();
    
};
wageemployee::wageemployee()
{
    cout<<"In default of wage :"<<endl;
    hrs=0;
    rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
    cout<<"In para of wage :"<<endl;
    hrs=h;
    rate=r;
}
int wageemployee::findsalary()
{
    return hrs*rate;
}
void wageemployee::display()
{
   employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
int main()
{
    employee *ptr;
    wageemployee wage(435,4354,35435);
    ptr=&wage;
    cout<<"salary is :"<<ptr->findsalary();
    ptr->display();

}