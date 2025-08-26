#include<iostream>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    float avg;
    cout<<"enter no of subjects\n";
    cin>>n;
    cout<<"enter no of characters in name\n";
    cin>>m;
    int*p_marks=new int[n];
    char*p_name=new char[m+1];
    cout<<"enter marks\n";
    for(i=0;i<n;i++)
    {
        cin>>p_marks[i];

    }
    for(i=0;i<n;i++)
    {
        sum=sum+p_marks[i];
    }
    avg=(float)sum/n;
    cout<<"enter name\n";
    cin>>p_name;
    cout<<"name of student is \n"<<p_name;
    cout<<"average is\n"<<avg;
    delete[]p_marks;
    delete[]p_name;

}