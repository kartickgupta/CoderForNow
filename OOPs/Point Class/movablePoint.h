#include "Point.h"

class movablePoint : public Point
{
private:
    int speedX, speedY;
    
public:
   // movablePoint();
    movablePoint(int x, int y, int sx = 0, int sy = 0);
    int getSpeedX() const;
    int getSpeedY() const;
    void setSpeedX(int sx);
    void setSpeedY(int sy);
    void setSpeedXY(int sx, int sy);
    void print() const;
    void move();    
};

