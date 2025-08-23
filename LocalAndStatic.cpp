// Local and Static variable
#include<iostream>
using namespace std;
void show();
int demo();
int main() {
    show();
    show();
    show();
    demo();
    return 0;
    
}
int demo()
{
    int a; // local variable
    a=20;
    cout<<a<<endl;
   
    return a;
   
}
void show() {
    static int x = 0; // Static variable retains its value across calls
    cout << x << endl;
    x++;
//  cout<<a; //local veriable can not be accessed outside its scope
}