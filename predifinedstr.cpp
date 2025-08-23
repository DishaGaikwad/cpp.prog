#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char str[50]="hello world";
    char str1[]="hello\0 world";
    int len=strlen(str);
    cout<<"length of the string is"<<len<<endl;
    cout<<"size of the string is"<<sizeof(str)<<endl;
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<sizeof(str1)<<endl;
    cout<<strlen(str1)<<endl;

    char str3[20]="hello";
    char str4[50]="bye";
    strcat(str3,str4);
    cout<<str3;

}
