#include<iostream>
using namespace std;
//#include<string.h>
#include <cstring>
class Student
{
    int roll;
    char name[20];
    public:
        Student()   //constructor
        {
            roll=101;
            strcpy(name,"Dikshita");
        }
        Student(int i,const char* ptr)
        {
            roll=i;
            strcpy(name,ptr);
        }
        void display()
        {
            cout<<"roll no is "<<roll<<endl;
            cout<<"name is " <<name<<endl;
        }
};

   int main()
   {
    Student s;
    s.display();
    Student s1(102,"Rohit");
    s1.display();
    return 0;
   }