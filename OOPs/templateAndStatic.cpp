#include<bits/stdc++.h>
using namespace std;

template <class T>
class function1{
public: 
    static int count;
    function1(){
        count++;
    }
};

template <class T>
int function1<T>::count = 0;

int main(){
    function1<int> a;
    function1<int> a1;
    function1<int> a2;
    function1<int> a3;

    function1<double> a4;

    cout << function1<int>::count << endl;
    cout << function1<double>::count << endl;
    cout << function1<string>::count << endl;

}