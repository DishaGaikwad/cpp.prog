 //const pointer pointing to const integer
#include <iostream>  
using namespace std;  
#include<string.h>
int main()  
{  
  	int a=10;
  	int y=20;
 const int *const ptr=&a;
  //*ptr=5;//not allowed
  a=5;//allowed
  //ptr=&y;//error
}