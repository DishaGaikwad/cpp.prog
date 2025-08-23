#include<iostream>
using namespace std;
int main()
{
    int num, originalNum, num1,rem,res=0;
    cout<<"Enter a 3 digit num";
    cin>>num;
    originalNum=num;
    while(originalNum!=0)
    {
        rem=originalNum%10;
        res +=rem*rem*rem;
        originalNum/=10;
    }
    if(res==num)

    cout<<num<<" is an armstrong no. ";
    else
    cout<<num<<" Is not an armstrong no. ";
    return 0;
}