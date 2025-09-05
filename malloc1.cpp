#include<iostream>
using namespace std;
#include<stdlib.h>
class A
{
    int a;
    public:
    A()
    {
        cout<<"inside default constructor of A :"<<endl;
    }
};
int main()
{
     A* a = new A();
     cout<<"creating object using new "<<endl;
     A * b=(A*)malloc(sizeof(A));
     cout<<"object of class A was created using maloc() "<<endl;

}

