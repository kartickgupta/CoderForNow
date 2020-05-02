#include<bits/stdc++.h>
#include "Counter.h"
using namespace std;

void Counter::getCount() const{
    cout << this->count << endl;
}

const Counter Counter::operator++(int dummy){
    Counter old(*this);
    count++;
    return old;
}

Counter& Counter::operator++(){
    ++count;
    return *this;
}