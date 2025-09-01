#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    public:
    void accept()
    {
        cin>>rollno;
        cin>>name;
    }
    void display()
		{
			cout<<"rollno is \t"<<rollno<<"name is \t"<<name<<endl;
			
		}
		student()
		{
			cout<<"destructor is called\n";
		}
	
};
int main()
{
    int i,n;
    cout<<"enter the no of students:\n";
    cin>>n;
     student* ptr	=new student[n];
  cout<<"accept details\n";
  for(i=0;i<n;i++)
   ptr[i].accept(); 
   cout<<"display details\n";
  for(i=0;i<n;i++)
   (ptr+i)->display();
delete [] ptr;
}