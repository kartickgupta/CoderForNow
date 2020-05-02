#include<bits/stdc++.h> 
#include "movablePoint.h"
using namespace std;



/*movablePoint::movablePoint(int x, int y, int sx, int sy){
    Point(x, y);
    speedX = sx;
    speedY = sy;
}*/

movablePoint::movablePoint(int x, int y, int xSpeed, int ySpeed)
      : Point(x, y), speedX(xSpeed), speedY(ySpeed) { }

int movablePoint::getSpeedX() const{    return speedX; }

int movablePoint::getSpeedY() const{    return speedY; }

void movablePoint::setSpeedX(int sx){    speedX = sx; }

void movablePoint::setSpeedY(int sy){    speedY = sy;
}

void movablePoint::setSpeedXY(int sx, int sy){
    speedX = sx;
    speedY = sy;
} 

void movablePoint::print() const{
    Point::print();
    cout << "Movable Point, X - Speed = " << getSpeedX() << " and Y - Speed = " << getSpeedY() << endl;
}

void movablePoint::move(){
    cout <<"\nThe Point Moves \n";
    Point::setXY(Point::getX() + speedX, Point::getY() +speedY);
    print();
}
