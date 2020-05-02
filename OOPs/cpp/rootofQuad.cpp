#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double a,b,c , r1,r2,d;

    cout << "Input a :" << endl;
    cin >> a;
    cout << "Input b :" << endl;
    cin >> b;
    cout << "Input c :" << endl;
    cin >> c;
    d = ((b*b)-(4*a*c))/(2*a);
    
    if (a==0)
    {   
        if(b == 0)
        {
            if (c == 0)
            {
                cout << "This is not a eqaution. Hence, no roots exist. \n";
            }
            else
            {
                cout << "This is not a quadratic equation\n";
                cout << "root is " << ((-c)/b) << endl;
            }
            
                
    }

    if(d < 0)
    {
        cout << (-b/2*a) << " + i" << sqrt(abs(d)) << endl;
        cout << (-b/2*a) << " - i" << sqrt(abs(d)) << endl;
        cout << d;

    }
    else
    {
        cout << (-b/2*a) + sqrt(d) << endl;
        cout << (-b/2*a) - sqrt(d) << endl;

    }
    
}