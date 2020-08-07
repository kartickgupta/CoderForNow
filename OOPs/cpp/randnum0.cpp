#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <numeric>
#include <ctime>

int main (void){
    
    srand(time(NULL));
    int randNum, guess;
    randNum = std::rand() %10;
    do
    {   std::cout<< "Guess The Number: ";
        std::cin>> guess;
        if(guess < randNum) std::cout<< "\nYou're way too small! \n";
        if(guess > randNum) std::cout<< "You're way too big!\n";
        
    } while (guess != randNum);
    
    std::cout<< "You guessed is right !!! Fuck -off Now ";
        
}