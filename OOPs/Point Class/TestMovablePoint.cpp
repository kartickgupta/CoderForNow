#include<bits/stdc++.h>
#include "movablePoint.h"
using namespace std;

int main(){
Point p1(4, 5);
p1.print();
p1.setY(100);
p1.print();
p1.setXY(200, 300);
p1.print();

cout << "\n New Object Begins \n";
movablePoint mp1(20, 10, 40, 50);
mp1.print();
mp1.move();
mp1.setSpeedXY(200, 100);
mp1.move();
//mp1.print();
}