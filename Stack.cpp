//case 1: object creation on stack with out virtual keyword
#include<iostream>
using namespace std;
class employee
{
    int id;
    public:
    employee();
	employee(int);
    void display();

    int findsalary()
    {
        return 0;
    }

};
employee::employee()
{
    cout<<"in defult of emp"<<endl;
    id=0;
}
employee::employee(int i)
{
    id=i;
}
void employee::display()
{
    cout<<"id of an emp :"<<id<<endl;
}
class wageemployee: public employee
{
    int hrs,rate;
    public:
    wageemployee();
    wageemployee(int ,int,int);
    void display();
    int findsalary();

   
    
};
wageemployee::wageemployee()
{
    cout<<"in default of emp :";
    hrs=0;
    rate=0;
}

wageemployee::wageemployee(int i,int h,int r)	:employee(i)
{
    cout<<"in para of wage :"<<endl;
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
   cout<<hrs<<rate<<endl;
}
int main()
{
    employee *ptr;
    wageemployee wage(101,202,303);
    ptr=&wage;
    cout<<"salary is :"<<ptr->findsalary();
    ptr->display();
}