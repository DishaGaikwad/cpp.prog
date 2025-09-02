#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"it is member function of class A"<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"it is member function of class B"<<endl;
    }
};
class child:public B,public A
{
    public: 
	void show()
	{
		A::show();
		B::show();
		cout<<"in child class show()";
	 } 
        void display()  
        {  
            cout << " It is the member function of the child class " << endl;  
         }  
};
int main()
{
    child ch;
    ch.show();
    ch.A::show();
	ch.B::show(); 
	ch.show(); 
    ch.display();  
    return 0;  
 } 
 
 
