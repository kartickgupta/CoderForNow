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
    /*
        Friend Functions are mainlyf used when we return in any third Variable
    */
    
    friend std::ostream & operator <<(std::ostream& out, const Complex & p);    // out << c
    friend std::istream & operator>> (std::istream & in, Complex& c);           // in >> c
    friend const Complex operator+(const Complex& lhs, const Complex& rhs);     // c3 = c2 + c1
    friend const Complex operator+(const Complex& lhs, double d) ;              // c3 = c1 + real number
    friend const Complex operator+( double d, const Complex& lhs);              // c3 = real number + c1
};
