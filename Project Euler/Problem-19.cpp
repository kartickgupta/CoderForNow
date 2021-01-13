#include<bits/stdc++.h>
using namespace std;

bool leap(int i){
    if(i%400 == 0 ){
        return true;            
    }
    else if(i%100 != 0 && i%4 ==0 && i%400 != 0){
        return true;
    }
    return false;

}
int day(int start, int end){
    int days =0;
    for(int i =0; i < end; i++){
        if(leap(i)){
            days+= 366;
        }
        else{
            days+= 365;
        }
    }
    return days;  
}

int main(){
    int days = day(1900, 2000);
    cout << days << endl;
    if(days%7 ==0){
        cout<< (days/7)-1 << endl;
    }
    else{
        cout << days/7 << endl;
    }
}