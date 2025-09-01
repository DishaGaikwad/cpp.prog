//Note: Objects are destroyed in the reverse order of their creation. 

#include<iostream>
using namespace std;
static int Count = 0; 
class test 
{
    public:
    test()
    { 
    	cout<<this<<endl;
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~test()
    {
         cout<<this<<endl;
        cout << "No. of Object destroyed: " << Count << endl;                                  
        Count--;
        
    }
};
int main()
{
    test t;
    cout<<&t<<endl;
	test t1;
	cout<<&t1<<endl;
	test t2;
	cout<<&t2<<endl;
}