#include<iostream>
using namespace std;
class person
{
    public:
    person(int)
    {
        cout<<"Person::Person(int ) called" << endl;
    }
};
class Faculty : public person 
{
 public:
    Faculty(int x):person(x)   
    {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
class student : public person
{
    public:
    student(int x):person(x)
    {
        cout<<"student::student(int)called "<<endl;
    }
};
class TA : public Faculty, public student  
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
