#include<bits/stdc++.h>
using namespace std;
int SIZE;

template<typename T>
void aswap(T& a, T& b);

template<typename T>
void aswap(T a[], T b[], int SIZE);

template <typename T>
void print(T a[], int SIZE);

int main(){
    
    int a1 =7 , b1 =6;
    int a[] = {1 ,3, 5, 6, 7, 8}, b[] = {2 ,4 ,5 ,60 ,100 ,10}, SIZE = 6;
    cout << a1 << " " << b1 << endl;
    aswap(a1, b1);
    cout << a1 << " " << b1 << endl;
    print(a, SIZE);
    print(b, SIZE);
    aswap(a, b, SIZE);
    print(a, SIZE);
    print(b, SIZE);
<<<<<<< HEAD
    
=======
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
}

template<typename T>
void aswap(T& a, T &b){
    a = a+ b;
    b = a-b;
    a = a -b;
}

template<typename T>
void aswap(T a[], T b[], int SIZE){
    T temp;
    for(int i =0; i < SIZE; ++i){
<<<<<<< HEAD
        aswap(a[i], b[i]);
=======
        temp  = a[i];
        a[i] = b[i];
        b[i] = temp;
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
    }
}

template <typename T>
void print(T a[], int SIZE){
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}