/*
    * Syntax 1: vector_name.insert (position, val);
    position - iterator at which values need to be inserted 
    val - value or values to be inserted in the vector (multiple values can be inserted)
    ! MULTIPLE VALUES CAN BE INSERTED

    * Syntax 2:   vector_name.insert(position, size, val)
    size --- How many times the same value should be inserted !!
    ! MULTIPLE VALUES CANNOT BE INSERTED

    * Syntax 3: vector_name.insert(position, starting , ending)       
    ? USED for inserting values from one vector in another ;

    v1 - vector in which we'll insert
    v2 - from which we'll copy values to be inserted in v1    
    USED for inserting one vector in another ;
    position - iterator for postion to be inserted
    it1 - starting positon of for v1
    it 2 -  ending postion for v2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1, 3, 4, 5, 6};
    vector<int> v2 = {2, 4, 7};

    for(auto i = v1.begin(); i != v1.end(); i++){   //Priniitng the vector
        cout << *i << " ";
    }
    cout << endl;

    v1.insert(v1.begin() +2 , {11, 21, 13, 41, 51}); // inserting multiple elements in the vector v1 from postion 2
    
    for(auto i = v1.begin() ; i != v1.end(); i++){  //Priniitng the vector
        cout << *i << " ";
    }
    cout << endl;

    v2.insert(v2.begin() + 2, 3, 44);           // inserting 44 3-times at third position as .begin() points to first

    for(auto i = v2.begin() ; i != v2.end(); i++){  //Priniitng the vector
        cout << *i << " ";
    }
    cout << endl;

    v2.insert(v2.begin() +1, v1.begin(), v1.end()); // Inserting ine vector in another
    for(auto i = v2.begin() ; i != v2.end(); i++){  //Priniitng the vector
        cout << *i << " ";
    }
    cout << endl;
}