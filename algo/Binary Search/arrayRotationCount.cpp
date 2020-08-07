#include<bits/stdc++.h>
using namespace std;

int RotationCounter(int A[], int size){
    int low =0, high = size -1;
    while(low<= high){
    
        if(A[low] <=A[high])    return low;  // it means that array is sorted, therefore no rotation
        int mid = low + (high-low)/2;
        int next = (mid+1)%size;
        int prev = (size + mid -1)%size;
        if(A[mid] <=  A[next] && A[mid] <= A[prev] )    return mid;
        else if(A[mid] <= A[high]){
            high = mid -1;
        }
        else if(A[mid] >= A[low]){    
            low = mid+1;
        }    
    }
    return -1;
}

int main(){
    int a[] = { 77, 83, 87, 91, 99, 100, 110,  23, 34, 56, 67, 69, 70, 72, 73, 75,76};
    int size = (sizeof(a)/sizeof(a[0]));
    int result = RotationCounter(a, size);
    cout  << "Arraya is rotated "<< result << " times!!!!" << endl;
}