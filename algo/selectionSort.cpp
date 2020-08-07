#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int size);
void print(int a[], int size);

int main(){
    int arr[] = {99, 43, 156 ,765, 123, 54, 45, 86};
    print(arr, 8);
    selectionSort(arr, 8);
    print(arr, 8);
}

void selectionSort(int a[], int n){
    for (int i=0; i < (n-1); i++ ){         // iMin is used as value
        int iMin = i;                       // Assuming selected index as min
        for (int j = i+1; j < n; j++)
        {
            if(a[iMin] > a[j]){             //Finding the minimum
                iMin = j;                   // Reassigning the value
            }
        }
        int temp = a[iMin];
        a[iMin] = a[i];
        a[i] = temp;
    }
}

void print(int a[], int n){
    for (int i =0; i <n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
