#include<iostream>
using namespace std;
class Test
{
    public:

    Test()
    {
        cout<<"constructor is called";
    }
    ~Test()
    {
        cout<<"distructor is called";
    }
};
Test t1;
int main()
{
	cout<<"main begins";
	Test t2;
	{
		cout<<"block begins"<<endl;
		Test t3;
		cout<<"block ends"<<endl;
	}
	cout<<"main ends"<<endl;
}
