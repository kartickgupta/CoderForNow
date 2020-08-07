// * Iterative Binary Search 
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int x){
    int start = 0;
    int end = size-1;
    while(start <= end){
        int mid = end + (start - end)/2; // (as end+start) may overflow
        cout << mid << endl;
        if (x == arr[mid]){
            return mid;
        }
        else if (x > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int A[]  = { 1 , 33 ,45, 67, 87, 88, 99, 100, 119, 120 ,133, 142, 150};
    int size = (sizeof(A)/sizeof(A[0]));
    int result = BinarySearch(A, size, 3);
    if(result != -1){
        cout << A[result] << endl;
    }
    else
    {
        cout << " NUmber not found\n";
    }
    
}