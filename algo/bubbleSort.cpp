#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n);
void print(int a[], int n);

int main(){
    int arr[] = {99, 43, 156 ,765, 123, 54, 45, 86};
<<<<<<< HEAD
    cout << "Given Array :" << endl;
    print(arr, 8);
    bubbleSort(arr, 8);
    cout << "Sorted Array !!!: " << endl;
=======
    print(arr, 8);
    bubbleSort(arr, 8);
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
    print(arr, 8);

}

void bubbleSort(int a[], int n){
    for (int i = 0; i < n-2; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
}

void print(int a[], int n){
    for (int i =0; i <n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}