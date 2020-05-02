#include<bits/stdc++.h>

class Complex
{
private:
    double real, imag;
public:
    explicit Complex(double r =0, double i = 0); 
    Complex& operator+=(const Complex& lhs);      //c1+= c2
    Complex& operator+=(double num);        //c+= double
    Complex& operator++();                  //++c
    const Complex operator++(int dummy);
    bool operator==(const Complex& rhs) const;
    bool operator!=(const Complex& rhs) const;

    //FRIENDS FUNCTION
    
    friend std::ostream & operator <<(std::ostream& out, const Complex & p);
    friend std::istream & operator>> (std::istream & in, Complex& c);        // in >> c
    friend const Complex operator+(const Complex& lhs, const Complex& rhs);
    friend const Complex operator+(const Complex& lhs, double d) ;
    friend const Complex operator+( double d, const Complex& lhs);
};
