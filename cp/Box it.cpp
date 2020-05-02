#include<bits/stdc++.h>

using namespace std;
class Box{
private:
    int l, b, h;
public:
    Box(){
        l = b = h = 0;
    }
    Box(int len, int bre, int hei){
        l = len;
        b = bre;
        h = hei;
    }
    int get_length(){
        return l;
    }
    int get_breadth(){
        return b;
    }
    int get_height(){
        return h;
    }
    long long CalculateVolume(){
        return l*b*h;
    }
    Box(const Box &A){}
};

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

