#include <iostream>
using namespace std;

double cube(int num)
{
    return num*num*num;
}

int main(void)
{   
    int num;
    cout << "Input any Number: ";
    cin >> num;
    double answer = cube(num);
    cout << "Final Answer is "<< answer << endl;
}