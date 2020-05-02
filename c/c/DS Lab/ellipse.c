// C Program to find the biggest ellipse 
#include <stdio.h> 
// Function to find the area 
float ellipse(float l, float b) 
{ 
	if (l < 0 || b < 0) 
		return -1;
	// Area of the ellipse 
	float x = (3.14 * l * b) / 4; 
	return x; 
} 
int main() 
{ 
	float l = 5, b = 3; 
	printf("%f \n",ellipse(l,b));
    return 0; 
} 
