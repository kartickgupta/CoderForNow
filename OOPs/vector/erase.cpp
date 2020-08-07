/*
    * v.erase(starting, end) 
    ! its from(including) to upto (excluding)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1, 3, 4, 5, 6, 77, 88, 99, 10, 11, 15};
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    v1.erase(v1.begin()+2);                         // *Erasing the value at third position as .begin() +2  =3
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    v1.erase(v1.begin()+2, v1.begin() + 6);         // * Erasing value from 3rd to 6th(including) = 4 values to be removed
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

}