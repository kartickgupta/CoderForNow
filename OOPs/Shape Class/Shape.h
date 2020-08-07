/*
    Header File - Only Declarations
*/
#include<string>
using namespace std;

class Shape                             // ! Abstract CLass - cannot create any instance, inherit in a derived class and use
{
private:
    string colour;
public:
    Shape(const string& col = "Red");
    string getColor() const;
    void setColor(const string& col);   
    void virtual print() const;             // ! Virtual Function    
    virtual double getArea() const =0;      // ! Pure Virtual Function - They have no body or implementation
                                            // !  their implementation is defined in dervied class according to the need                      
};
