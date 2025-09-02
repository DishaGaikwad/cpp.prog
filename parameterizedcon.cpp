#include<iostream>
using namespace std;
class person
{
    public:
    person(int x)
    {
        cout << "Person::Person(int ) called" << endl;
    }
    person()
    {
        cout<<"person::person() called"<<endl;
    }
};
class Faculty : virtual public person 
{
public:
    Faculty(int x):person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
class student :virtual public person
{
    public:
    student(int x):person(x)
    {
        cout<<"faculty::faculty(int)called "<<endl;
    }
};
class TA: public Faculty, public student
{
    public:
    TA(int x):student(x), Faculty(x)   
    {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
int main()  {
    TA ta1(30);
}