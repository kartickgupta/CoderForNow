/*  
    * swap(v1, v2) --- swapping 2 vectors of differenet sizes
    ? swapping can be done only for same type of vectors 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1, 3, 4, 5, 6};
    vector<int> v2 = {2, 4, 7};
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    for(auto i = v2.begin(); i != v2.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    swap(v1, v2);                           
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    for(auto i = v2.begin(); i != v2.end(); i++){
        cout << *i << " ";
    }
    cout << endl;





}   