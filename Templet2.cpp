#include<iostream>
using namespace std;
template<class T>
void swap( T &x,T &y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=10,b=20;
    cout<<a<<b<<endl;
    char x='A',y='B';
    cout<<x<<y<<endl;

}