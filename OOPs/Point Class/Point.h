class Point
{
private:
    int X, Y;
public:
    
    Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void setXY(int x, int y);
    void print() const;
    //Operator Overloading
    const Point operator +(const Point &rhs) const;

    friend std::ostream & operator <<(std::ostream& out, const Point & p);
    friend std::istream & operator >>(std::istream& in, Point &p);

    
};  


