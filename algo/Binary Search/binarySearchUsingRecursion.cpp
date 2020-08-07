// Recursiove Binary Search
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int l, int h, int x){
    if(l == h){
        if(arr[l]  == x)  return l;
        else return 0;
    }
    int mid = l + (h-l)/2;
    if(arr[mid] == x)   return mid;
    else if(arr[mid] > x)   return BinarySearch(arr, l, mid -1, x);
    else if(arr[mid] < x)   return  BinarySearch(arr, mid +1, h, x);
    return 0;
}

int main(){
    int A[]  = { 1 , 33 ,45, 67, 87, 88, 99, 100, 119, 120 ,133, 142, 150};
    int size = (sizeof(A)/sizeof(A[0]));
    int result = BinarySearch(A, 0,size-1, 150);
    if(result != 0){
        cout << A[result] << " Found At "<< result << endl;
    }
    else
    {
        cout << " Nmmber not found\n";
    }
    result = BinarySearch(A, 0,size-1, 100);
    if(result != 0){
        cout << A[result] << " Found At Postion "<< result << endl;
    }
    else
    {
        cout << " Nmmber not found\n";
    }
    result = BinarySearch(A, 0,size-1, 10);
    if(result != 0){
        cout << A[result] << " Found At "<< result << endl;
    }
    else
    {
        cout << " Nmmber not found\n";
    }
    
}