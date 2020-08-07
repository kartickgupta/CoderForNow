#include<bits/stdc++.h>
using namespace std;

class Shape{                             //  Abstract CLass - cannot create any instance, inherit in a derived class and use
protected:
    int base;
    int height;
public:
    virtual void getData(){        // Virtual Function
        int b, h; cin >> b>>h;
        this->base = b;
        this->height = h;
    }
    virtual void Show_area() =0; // Pure Virtual Function
    virtual float getArea() =0;     // Pure Virtual Function

};

class Triangle : public Shape{      // Inherted Class
public:
    void getData(){                  //Overridden Function
        cout<< "Enter Base Length and Perpendicluar Height of Triangle :";
        Shape::getData();
    }
    float getArea(){            // Defining Pure Virtual Function getArea according to need of class
        return (0.5)*this->base*this->height;
    }
    void Show_area(){           // Defining Pure Virtual Function Show_area according to need of class
        cout << "Area of Triangle is "<< getArea() << endl;

    }

};
class Rectangle : public Shape{     // Inherted Class
public:
    void getData(){             //Overridden Function
        cout<< "Enter Length of sides of Reactangle B and L : ";
        Shape::getData();
    }

    float getArea(){             // Defining Pure Virtual Function getArea according to need of class
        return this->base*this->height;
    }
    void Show_area(){            // Defining Pure Virtual Function Show_area according to need of class
        cout << "Area of Rectangle is "<< getArea() << endl;

    }

};

int main(){
    Shape* tri = new Triangle();
    tri->getData();
    tri->Show_area();

    Shape* rect = new Rectangle();
    rect->getData();
    rect->Show_area();

}