#include<bits/stdc++.h>
using namespace std;

int Peak(int arr[], int size){
    if( arr[size/2 -1] >= arr[size/2]){
        Peak(&arr[(size/2)-1], size/2);
    }
    else if(arr[size/2 +1] >= arr[size/2]){
        Peak(&arr[(size/2)+1], size/2);
    }
    else
    {
        return arr[size/2];
    }
    
}

int main(){
    int arr[10] = {1, 2, 43, 67, 87,2, 12, 3, 5,56};
    int result = Peak(arr, 10);
    cout << result << endl;
}