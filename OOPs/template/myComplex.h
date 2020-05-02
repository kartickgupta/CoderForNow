#include<bits/stdc++.h>
using namespace std;

template <typename T>
class myComplex
{
private:
    T real, imag;
public:
    myComplex(T r = 0, T i = 0);

    myComplex<T>& operator+=(const myComplex<T>& T1);
    myComplex<T>& operator+=(const T value);

    bool operator==(const myComplex<T>& T1) const;
    bool operator!=(const myComplex<T>& T1) const;

    myComplex<T>& operator++();
    const myComplex<T>& operator++(int dummy);
    
    
    friend std::ostream & operator<< <>(std::ostream& out, const myComplex<T>& T1);
    friend std::istream & operator>> <>(std::istream& in, myComplex<T>& T1);
    
    friend const myComplex<T>& operator+ <>(const myComplex<T>& T1, const myComplex<T>& T2);
    
    friend const myComplex<T>& operator+ <>( const myComplex<T>& T1, T value);
   
    friend const myComplex<T>& operator+ <>( T value, const myComplex<T>& T2); 
};

template<typename T>
myComplex<T>::myComplex(T r, T i): real(r), imag(i) {};

template<typename T>
myComplex<T>& myComplex<T>::operator+=(const myComplex<T>& T1){
    this->real += T1.real;
    this->imag += T1.imag;
    return *this;
}

template<typename T>
myComplex<T>& myComplex<T>::operator+=(T value){
    this->real += value;
    return *this;
}

template<typename T>
bool myComplex<T>::operator==(const myComplex<T>& T1) const{
    return (this->real == T1.real && this->imag == T1.imag);
}

template<typename T>
bool myComplex<T>::operator!=(const myComplex<T>& T1) const{
    return !(this == T1);
}

template<typename T>
const myComplex<T>& myComplex<T>::operator++(int dummy){
    T temp(*this);
    temp++;
    return (*this);
}

template<typename T>
myComplex<T>& myComplex<T>::operator++(){
    ++this;
    return (*this);
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const myComplex<T>& T1){
    return (out << T1.real << " " << "+" << T1.imag << "i");
}

template<typename T>
istream& operator>>(istream& in, myComplex<T>& T1){
    return (in >> T1.real >> T1.imag);
}

template <typename T>
const myComplex<T>& operator+(const myComplex<T>& T1, const myComplex<T>& T2){
    myComplex<T> temp;
    temp.real = T1.real + T2.real;
    temp.imag = T1.real + T2. imag;
    return temp;
}

template<typename T>
const myComplex<T>& operator+(const myComplex<T>& T1, T value){
    myComplex<T> temp;
    temp.real += value;
    return temp;
}

template<typename T>
const myComplex<T>& operator+( T value, const myComplex<T>& T1){
    return (temp+ value);
}
