#include <iostream>
using namespace std;

// Function declaration
void user_strcpy(char* s2, char* s1);

int main() {
    char str1[20];
    char str2[50];

    cout << "Enter first string: ";
    cin >> str1;
    
    user_strcpy(str2, str1);

    cout << "Copied string is: " << str2 << endl;

    return 0;
}

// Function definition
void user_strcpy(char* s2, char* s1) {
    while (*s1 != '\0') {
        *s2 = *s1;
        s1++;
        s2++;
    }
    *s2 = '\0';
}