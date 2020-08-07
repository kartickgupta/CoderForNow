#include <iostream>
using namespace std;

int greetUser(string name, int age)
{
    cout << "Hello " << name << ", your age is "<< age <<endl  << "Have a Great Day!" << endl;
}

int main(void)
{
    string name;
    int age;
    cout <<"Please input your name: ";
    getline(cin, name);
    cout << "Please enter your age: ";
    cin >> age;
    greetUser(name, age);

}