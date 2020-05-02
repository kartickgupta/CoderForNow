#include <iostream>

int main(int number, char * vector[])
{   
    int a,b;
    a = atoi(vector[1]);
    b = atoi(vector[2]);
    int c = a*b;
    std::cout << "The Output is " << c << std::endl;
    for(int i =0; i<= number; i++)
    {
        std::cout << vector[i]<< std::endl;
    }
    /*More precisely, the strings at the command line are stored in memory and address of the first string is stored in argv[0],
     address of the second string is stored in argv[1] and so on. The argument argc is set to the number of strings given on the command line.*/
}