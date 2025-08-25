#include <iostream>
using namespace std;

void fun(int a,bool flag=true)
{
    if(flag==true)
    {
        cout<<"Flag is true a="<<a;

    }

    else{
        cout<<"flag is false a="<<a;
    }
}
int main()
{
    fun(200,false);
}