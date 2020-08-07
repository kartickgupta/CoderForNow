#include <iostream>
#include<string>
using namespace std;

int main(void)
{
    int age = 20;
    int *agePtr = &age;
    string hello = "greetings";
    cout << "age is located at: " << &age << endl;
    cout << "age is located at: " << agePtr << endl;
    cout << hello.append(" Hello, this is E-Cell NIT-Agartala");
    
}