#include<iostream>
using namespace std;

namespace One
{
    int a=10;
    void test()
    {
        cout<<"inside namespace One "<<endl;
    }
    namespace Two
    {
        int a=100;
    void test()
    {
        cout<<"inside namespace Two "<<endl;
    }
    }
} 
using namespace One;
int main()
{
    test();
    return 0;
}
