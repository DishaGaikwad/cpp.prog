
#include <iostream>
using namespace std;
int num;
int cnt=0;
int main() {
    cout<<"Enter any number : ";
    cin>>num;
    
    if (num <= 1)
        cout << num << " is NOT prime";
    else {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                cnt++;
        }
        if (cnt > 2)
            cout << num << " is NOT prime";
        else
            cout << num << " is prime";
    }
    return 0;
}
