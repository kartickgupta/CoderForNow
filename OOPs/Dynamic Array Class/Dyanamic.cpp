#include "Dynamic.h"
using namespace std;

Dynamic::Dynamic(int n) : size(n){
    if(n<0) throw invalid_argument("error: Size must be greater than Zero");
    this->ptr = new double(this->size);
    for (int i= 0; i<size; i++){
        this->ptr[i] = 0;
    }
}

Dynamic::Dynamic(const Dynamic& dy){
    this->ptr = new double(dy.size);
    for (int i =0; i< dy.size; i++){
        this->ptr[i] = dy.ptr[i];
    }
}

Dynamic::Dynamic(int a[], int size){
    this->size = size;
    this->ptr = new double(size);
    for(int i= 0; i<size; i++){
        this->ptr[i] = a[i];
    }
}

Dynamic::~Dynamic(){
    delete ptr;
}
const Dynamic Dynamic::operator=(const Dynamic& dy){
    Dynamic temp;
}

bool Dynamic::operator==(const Dynamic& dy) const{
    if(this->size != dy.size )  return false;
    for(int i = 0; i < this->size; i++){
        if(this->ptr[i] != dy.ptr[i]) return false;
    }
    return true;
}

bool Dynamic::operator!=(const Dynamic& dy) const{
    return !(*this == dy);              //using opertaion==
}

int Dynamic::operator[](int n){
    if(n <0 || n> this->size) throw invalid_argument("error: Index out of range!");
    return (this->ptr[n]);
}

Dynamic& Dynamic::operator=(int n){
    int i;
    this->ptr[i] = (double) n;
    return *(this);
}

ostream& operator<<(ostream& out, const Dynamic& dy){
    for(int i =0; i < dy.size; i++ ){
        out << dy.ptr[i] << "  ";
    }
    return out;
}

istream& operator>>(istream& in, Dynamic& dy){
    for(int i =0; i < dy.size; i++ ){
        in>> dy.ptr[i];
    }
    return in ;
}
