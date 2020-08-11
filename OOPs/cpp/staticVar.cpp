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
<<<<<<< HEAD
    int x = 0; // Normal Variable !!
=======
    int x; // Normal Variable !!
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
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
