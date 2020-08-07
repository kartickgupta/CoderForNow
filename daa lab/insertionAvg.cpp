// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std;

void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

/* Driver code */
int main() 
{ 
    srand(time(NULL));  
    int arr[1000] ,n, c, d, swap;
    printf("Input the number of elements you want = ");
    scanf("%d",&n);
    printf("Input all numbers : \n");
    for (int i = 0; i<= n; i++)
    {
        arr[i] = rand()%100;
    }
    clock_t start,end;
    double tc;
      
    printArray(arr, n);
    start = clock();
	insertionSort(arr, n);
    end = clock();
    tc = end - start;
	printArray(arr, n); 
    printf("\nThe time complexity of bubble sort is :%lf",tc); 

	return 0; 
} 

// This is code is contributed by rathbhupendra 
