#include "myComplex.h"
using namespace std;

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
ostream& operator<<(ostream& out, const myComplex<T>& T1){
    return (out << T1.real << " " << "+" << T1.imag << "i");
}

template<typename T>
istream& operator>>(istream& in, myComplex<T>& T1){
    return (in >> T1.real >> T1.imag);
}

template <typename T>
const myComplex<T>& myComplex<T>::operator+(const myComplex<T>& T1, const myComplex<T>& T2){
    myComplex<T> temp;
    temp->

}