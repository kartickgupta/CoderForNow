#include <iostream>
using namespace std;

class box
{
    int height;
    public:
        box(int x)
        {
            height = x;
        }
        friend void display(box);
};

void display (box y)
{
    cout << y.height;
}

int main(void)
{
    box b1(8800);
    
    display (b1);

}