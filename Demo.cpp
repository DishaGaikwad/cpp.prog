#include<iostream>
using namespace std;
void sum(int a = 1, int b = 2, int c = 3, int d = 4, int e = 5) {
    cout << "Sum is => " << a + b + c + d + e << endl;
}

int main() {
    sum();                    
    sum(10, 20);              
    sum(0, 50, 0, 40, 10);     
    return 0;
}
