#include <iostream>
#include <fstream>
using namespace std; 
int main() {

    // opening a text file for writing
    ifstream my_file("example1.txt");
    // close the file
    my_file.close();
    return 0;
}