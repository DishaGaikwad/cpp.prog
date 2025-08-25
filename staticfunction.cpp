#include<iostream>
using namespace std;
class complex{
    public:
    static int cnt;

};
int complex::cnt=5;
int main()
{
    cout<<complex::cnt;
}