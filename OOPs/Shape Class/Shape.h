#include<string>
using namespace std;

class Shape
{
private:
    string colour;
public:
    Shape(const string& col = "Red");
    string getColor() const;
    void setColor(const string& col);
    void virtual print() const;
    virtual double getArea() const =0;   
};
