

#include <iostream>
using namespace std;
 
int main() {
  try {
    std::cout<<"Please enter the age"<<std::endl;
    int age;
    std::cin>>age;
    if (age<0 || age>100)
    {
      throw (age);
}
 }
 catch (int e) {
cout << "Access denied - You must enter a valid age.\n";
}
  return 0;
}