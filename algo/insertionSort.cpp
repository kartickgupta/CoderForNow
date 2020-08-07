#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n);
void print(int a[], int n);

int main(){
    int arr[] = {99, 43, 156 ,765, 123, 54, 45, 86};
    print(arr, 8);
    insertionSort(arr, 8);
    print(arr, 8);
}

void insertionSort(int a[], int n){
    for (int i =1; i <n; i++)
    {
        int hole = i;
        int value = a[hole];
        while(hole > 0 && a[hole -1] > value)
        {
            a[hole] = a[hole -1];
            hole--;
        }
        a[hole] = value;
    }
}


void print(int a[], int n){
    for (int i =0; i <n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}