#include<iostream>
using namespace std;
namespace first_space
{ 
    
    int a=10;
    void func()
    {
        cout<<"inside first_space"<<endl;
    }
}
namespace second_space
{
    int b=20;
    void func()
    {
        cout<<"inside second_space"<<endl;
    }
}
//using namespace first_space;
using namespace second_space;
int main()
{
    func();
   // cout<<a;
    cout<<b;
    return 0;

}