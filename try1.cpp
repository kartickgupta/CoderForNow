#include<bits/stdc++.h>
using namespace std;

int LowerBound(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int result = -1;
    while (low <= high){
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
            result = mid;           
        }
    }
    return result;
}

int main(){
    //       !   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18
    int A[] = {-20, -18, -18, -17, -16, -1,-1,-1, -1, 1, 1, 2, 3, 4, 5, 10, 23, 40, 42, 50}; 

    int B[]  = {0, 1, 1, 1, 2, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5,  5, 6,  6,  6,  7,  45,  87}; // i =2 for 2
    
    int C[] = {-20, -18, -18, -17, -16, -1,-1,-1, -1, 1,1,1,1,2, 2 ,2, 2,2}; // ! for 2 i == 13
    int D[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; // for 2 index = 9(last) for 0 i == -1
    int E[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // for 0 index == 0 for 2 i == 11(last)

    int size = (sizeof(A)/sizeof(C[0]));
    cout << size<< endl;
    int result = LowerBound(A, size, 0);

    cout<< result <<endl;
}