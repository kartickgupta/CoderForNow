#include<bits/stdc++.h>
#include "Time.h"
using namespace std;

Time::Time(int h, int m, int s)
{
    hour =h;
    minute =m;
    second = s;
}

void Time::setHours(int h){
    hour = h;
}

int Time::getHours() const{
    return hour;
}
void Time::setMinutes(int m){
    minute = m;
}

int Time::getMinutes() const{
    return minute;
}
void Time::setSeconds(int s){
    second = s;
}

int Time::getSeconds() const{
    return second;
}

void Time::setTime(int h, int m, int s){
    hour = h;
    minute = m;
    second =s;
}

void Time::print() const{
    cout<< setfill('0');
    cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::nextSecond(){
    ++second;
    if(second >= 60)
        second = 0;
        ++minute;
    if(minute >= 60)
        minute = 0;
        ++hour;
    if(hour >= 24)
        hour = 0;
}