#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <numeric>

int main()
{
    std::vector <int> myVec(10);                            // Inorder to Initialize the Vector
    std::iota(std::begin(myVec), std::end(myVec),1);       //To automatically assign values to the parts of Vector!

    for(int i = 0; i< myVec.size(); i++)                    //For printing values in myVec
    {
        std::cout << "The Values are : " << myVec[i]<< "\n";
    }

    for(auto y: myVec) std::cout<< y << std::endl;

    // To make a program to seperate odd and even nos
    for (auto x: myVec )
    {
        if(x%2 == 0)
            std::cout<< x << " is even number"<< std::endl;
        else
            std::cout << x <<" is an odd Number "<< std::endl;
        
    }   
    
}



