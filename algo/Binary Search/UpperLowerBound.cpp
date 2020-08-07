//   * Using Binary Search to Find Upper, Lower Bound & Frequency Counter

#include<bits/stdc++.h>
using namespace std;

int LowerBound(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == x){
            result = mid;
            high = mid -1;
        }
        else if(arr[mid] < x){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return result;
}

int UpperBound(int A[], int size, int x){
    int low =0, high = size-1, result = -1;

    while (low <= high){
        int mid = low + (high -low)/2;
        if(A[mid] == x){
            result = mid;
            low  = mid+1;
        }
        else if(A[mid] < x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return result;
}

int frequencyCounter(int arr[], int size, int x){
    return (UpperBound(arr, size, x) - LowerBound(arr, size, x ) + 1);
}

int main(){
    int A[]  = {1 ,1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5,6, 6, 6, 7, 45, 87};
    int size = (sizeof(A)/sizeof(A[0]));
    int result = LowerBound(A, size, 6);
    if(result != -1){
        cout << A[result] << " at "<< result <<  endl;
    }
    else
    {
        cout << " NUmber not found\n";
    }

    cout << "Frequency is " << frequencyCounter(A, size, 5) << endl;
    
}