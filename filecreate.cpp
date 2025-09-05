#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt"); // Creates or opens the file

    if (file.is_open()) {
        file << "Hello, file!\n";  // Write to the file
        file.close();              
        cout << "File created and written successfully.\n";
    } else {
        cout << "Failed to create the file.\n";
    }

    return 0;
}
