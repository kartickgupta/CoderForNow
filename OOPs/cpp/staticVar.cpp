// C++ program to demonstrate 
// the use of static Static 
// variables in a Function 
#include <iostream> 
#include <string> 
using namespace std; 

void demo() 
{ 
	// static variable 
	static int y = 0; 
    int x = 0; // Normal Variable !!
	cout << y << " " << x << endl;
	// value is updated and 
	// will be carried to next 
	// function calls 
	y++;
    x++; 
} 

int main() 
{ 
	for (int i=0; i<5; i++)	 
		demo(); 
	return 0; 
} 
