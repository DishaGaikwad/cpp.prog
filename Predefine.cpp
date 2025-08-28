#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[20] = "Dikshita";
    char n1[20] = "Singh";
    char target[40]; 

    // strlen(): Counts the number of characters in the string, excluding the null terminator.
    cout << "Length of name: " << strlen(name) << endl;

    // sizeof(): Returns the size of the array in bytes, including the null terminator.
    cout << "Size of name array: " << sizeof(name) << endl;

    // strcpy(): Copies the string from the source ('name') to the destination ('target').
    strcpy(target, name);
    cout << "After strcpy, target is: " << target << endl;

    // strcat(): Concatenates (joins) two strings. Appends 'n1' to the end of 'target'.
    strcat(target, " ");
    strcat(target, n1);
    cout << "After strcat, target is: " << target << endl;

    // strcmp(): Compares two strings lexicographically. Returns 0 if equal, a negative value
    // if the first string is less, and a positive value if the first is greater.
    if (strcmp(name, n1) == 0) {
        cout << "The strings 'name' and 'n1' are the same." << endl;
    } else {
        cout << "The strings 'name' and 'n1' are different." << endl;
    }

    // strchr(): Finds the first occurrence of a character.
    char* p_char = strchr(name, 'i');
    if (p_char != NULL) {
        cout << "First 'i' found at position: " << p_char - name << endl;
    }

    // strstr(): Finds the first occurrence of a substring.
    char* p_str = strstr(target, "ita");
    if (p_str != NULL) {
        cout << "Substring 'ita' found starting at position: " << p_str - target << endl;
    }

    return 0;
}