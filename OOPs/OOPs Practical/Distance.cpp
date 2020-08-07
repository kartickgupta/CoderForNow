#include<bits/stdc++.h>
using namespace std;

class Distance{
private:
    int feet;
    int inch;
    int totalDistance;
public:

    Distance(int f, int i) : feet(f), inch(i) {
        totalDistance = inch + 12*feet;
    }
    friend void Compare(const Distance& d1, const Distance & d2);
};

void Compare(const Distance& d1, const Distance & d2){
    int t1 = d1.totalDistance, t2 = d2.totalDistance;
    if(t1 > t2){
        cout << d1.feet << " feet " << d1.inch <<" inches is greater"<< endl;
    }
    else if(t2 > t1){
        cout << d2.feet << " feet " << d2.inch <<" inches is greater"<< endl;
    }
    else{
        cout<<"Both are Equal"<< endl;
    }
    return;
}

int main(){
    Distance d1(6,11), d2(5, 10);
    Distance d3(6,11), d4(7, 10);
    Distance d5(10,10), d6(10, 10);
    Compare(d1, d2);
    Compare(d3, d4);
    Compare(d5, d6);
}