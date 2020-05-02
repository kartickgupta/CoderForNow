// C++ program for implementation of selection sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver program to test above functions 
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
	selectionSort(arr, n); 
    end = clock();
    tc = end - start;
    cout << "Sorted array: \n"; 
	printArray(arr, n); 
    printf("\nThe time complexity of bubble sort is :%lf",tc);
	return 0; 
} 

// This is code is contributed by rathbhupendra 
