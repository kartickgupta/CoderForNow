/*
    ! assign() - is an STL in C++ which assigns new values to the vector elements by replacing old ones. It can also modify the size of the vector if necessary.
    ! Allways us to initialize or completly change the vector
    * Syntax1: vector<int> a (n, x)
    ? USed for initializing it makes a vector and fills all n values with x
    
    * Syntax2 : vector.assign(arr, arr + size)
    ? for assigning values from an array or list
    arr - the array which is to be assigned to a vector
    size - number of elements from the beginning which has to be assigned.



*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 78};
    v1.assign(arr, arr + 5);
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout<< endl;
    cout << "modifies exisitng values" << endl;
    v1.assign(arr, arr + 8);        
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
}