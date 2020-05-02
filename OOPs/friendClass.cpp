#include <iostream>
using namespace std;

class Ball; //Prototype Declaration of Class

class Bat
{
private:
    int weight;
    int lenght;
public:
        void setBatWieght(int w )   // Setter Function to Set Modify the Private Values
        {
            weight = w;
        }
        void setBatLenght(int l)    // Setter Function to Set Modify the Private Values
        {
            lenght = l;
        }
    friend int totalWeight(Ball, Bat); // Prototype Declaration of Friend Class
};

class  Ball
{
private:
    int weight;
    int radius;

public:
    void setBallWieght(int w )  // Setter Function to Set Modify the Private Values
        {
            weight = w;
        }
        void setBallRadius(int r)   // Setter Function to Set Modify the Private Values
        {
            radius = r;
        }
    friend int totalWeight(Ball, Bat); // Prototype Declaration of Friend Class
};

int totalWeight(Ball x , Bat y) // Declaration of Function
{
    return x.weight + y.weight;
}

int main()
{    
    Bat SG;
    Ball Cosco;
    SG.setBatWieght(1500);
    Cosco.setBallWieght(500);
    cout<<"The Total Wieght of Kit is: "<< totalWeight(Cosco, SG);
}