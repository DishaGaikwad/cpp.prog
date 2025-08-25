#include<iostream>
using namespace std;

int main() {
    int n;

   
    cout << "Enter number of elements: ";
    cin >> n;
}
    
    if (n <= 0) {
        cout << "Invalid number of elements. Exiting program." << endl;
        return 1; 

    
    int* ptr = new int[n];

    
    cout << "Accept values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> ptr[i];
    }

    
    cout << "Display elements:\n";
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << "\t";
    }
    cout << endl;

   
    delete[] ptr;

    return 0;
}

