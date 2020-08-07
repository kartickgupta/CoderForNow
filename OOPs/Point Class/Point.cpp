#include<bits/stdc++.h>
#include "Point.h"
using namespace std;

Point::Point(int x, int y){
    X = x;
    Y = y;
}

int Point::getX() const{
    return X;
}

int Point::getY() const{
    return Y;
}

void Point::setX(int x){
    X = x;
}

void Point::setY(int y){
    Y= y;
}

void Point::setXY(int x, int y){
    Y= y;
    X= x;
}

void Point::print() const{
    cout << "The Location is X= " << getX() << " and Y = " << getY() << endl;
}

//OPerator Overloading
const Point Point:: operator+(const Point &rhs) const{
    return Point(X +rhs.getX(), Y +rhs.getY());
}

ostream& operator <<(ostream& out, const Point& p){
    out << "(" << p.X << "," << p.Y << ")"<< endl;
    return out;
}

istream& operator>>(istream& in, Point& p){
    cout << "Enter the values of X and Y \n";
    in >> p.X >> p.Y;
    return in;
}

