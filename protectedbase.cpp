#include<iostream>
using namespace std;
class base
{
    private:
    int pvt=1;
    protected:
    int prot=2;
    public:
    int pub=3;
    int getpvt()
    {
        return pvt;
    }

};
class ProtectedDerived : protected base{
public:
int getProt() { return prot; } 
  
    
    int getPub() { return pub; } 
};

int main()
{
    ProtectedDerived object1;
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.getPub() << endl; 
//cout<<object1.prot;//error
//cout<<object1.pub;//error
//cout<<object1.getPvt();//error


    return 0; 
}

