#include<iostream>
using namespace std;
class StudentData
{
    char name[20];
    int roll;
    string dob;
    int marks;

    void input()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter roll no :"<<endl;
        cin>>roll;
        cout<<"Enter dob (dd/mm/yy) :"<<endl;
        cin>>dob;
        cout<<"Enter marks :"<<endl;
        cin>>marks;

    }
    void display()
    {
        cout<<name<<"\t"<<roll<<"\t"<<dob<<"\t"<<marks<<endl;
    }

};
