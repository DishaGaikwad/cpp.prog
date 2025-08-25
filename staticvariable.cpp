#include<iostream>
using namespace std;
void demo()
{
    static int i=1, sum=0;
    sum+i;
    cout<<sum<<endl;
    i++;
}
int main()
{
    for(int i=1;i<5;i++)
    {
    demo();
}
}