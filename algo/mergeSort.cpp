#include<bits/stdc++.h>
using namespace std;

int* mergeSort(int a[], int n);
void print(int a[], int n);
void merge(int* L, int* R, int* a, int n1, int n2, int n);

int main(){
    int arr[] = {99, 43, 156 ,765, 123, 54, 45, 86};
    print(arr, 8);
    mergeSort(arr, 8);
    print(arr, 8);
}

int* mergeSort(int a[], int n){

    if(n < 2 ) return a;

    int mid = n/2;
    int* Left = new int(mid);
    int* Right = new int(n - mid);

    //Initialization of Arrays
    for (int i = 0; i < mid; i++)
    {
        Left[i] = a[i];
    }
    for (int i = n-mid; i < n; i++)
    {
        Right[i - n -mid] = a[n - mid + i];
    }
    
    //Recursion
    mergeSort(Left, mid);
    mergeSort(Right, n-mid);
    merge(Left, Right, a, mid, n - mid, n);
}

void merge(int L[], int R[], int A[], int n1, int n2, int n){

    for (int i = 0; i < n; i++)
    {
        int l =0, m= 0;
        while ( n1> l && n2 > m)
        {
            if(L[l] > R[m]){
                A[i] = R[m];
                m++;
            }
            if(L[l] < R[m]){
                A[i] = L[l];
                l++;
            }
            i++;
        }
        
        while ( l < n1)
        {
            A[i] = L[l];
            l++;
            i++;
        }
        while ( m < n2)
        {
            A[i] = R[m];
            m++;
            i++;
        }
        
    }
    
}

void print(int a[], int n){
    for (int i =0; i <n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}