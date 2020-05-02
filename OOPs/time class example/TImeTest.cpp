#include <iostream>
#include "Time.h"    // include header of Time class
using namespace std;
 
int main() {
   Time t1(23, 59, 59);   // Test constructor
 
   // Test all public member functions
   t1.print();
   t1.nextSecond();
   t1.print();       // 23:59:59
   t1.setHours(12);
   t1.setMinutes(30);
   t1.setSeconds(15);
   t1.print();       // 12:30:15
   cout << "Hour is "   << t1.getHours()   << endl;
   cout << "Minute is " << t1.getMinutes() << endl;
   cout << "Second is " << t1.getSeconds() << endl;
}