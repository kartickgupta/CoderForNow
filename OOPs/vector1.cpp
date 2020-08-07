#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <numeric>

std::vector<int> Range(int start_value, int end_value,int increment);

int main()
{
    int start, end, increment;
    std::cout<< "Input the start value: "<<"\n";
    std::cin>> start;
    std::cout<< "Input the end value: "<<"\n";
    std::cin>> end;
    std::cout<< "Input the increment value value: "<<"\n";
    std::cin>> increment;
    std::vector<int> vectorvalu = Range(start, end, increment);
    
    for( auto x: vectorvalu)
    {
        std::cout<< x<< "\n";
    }
    


}
std::vector<int> Range(int start_value, int end_value,int increment)
{
    std::vector<int> myVect(end_value - start_value);
    while (int i =start_value < end_value)
    {
        myVect.push_back(i);
        i+= increment;
    }
        
    return myVect;
}