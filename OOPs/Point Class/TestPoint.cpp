#include<bits/stdc++.h>
#include "Point.h"
using namespace std;

int main()
{
    Point p1(4,5 );
    Point p2(20, 20);
    Point p3 = p1 + p2; // (24, 25)
    p3.print();
    p3.setXY(45, 60);
    p3.print();

    Point p4 = p3.operator+ (p1);
    p4.print();

    Point p5 = p1 + p2 +p3 +p4;
    p5.print();

    cout << p4;
    cin >> p5;
    cout << p5;
}