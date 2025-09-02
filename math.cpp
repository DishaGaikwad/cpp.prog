#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int ans;
    ans=sqrt(4);
    cout<<ans<<endl;

    int a,m,n;
    m=abs(-56);
    n=abs(-5.7);
    a=abs(9.8);
    cout<<a<<endl;

    int b;
    int exp=3;
    int base=12;
    b=pow(base,exp);
    cout<<b<<endl;

    float c=6.7;
   float d=-56.6;
    cout<<d<<endl;
    c=ceil(c);
    cout<<c<<endl;

    float  f=64.7;
    cout<<floor(f)<<endl;


    float r=5.76;
    cout<<"round of " << round(r);


}