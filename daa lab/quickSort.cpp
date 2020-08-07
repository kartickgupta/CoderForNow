/* C++ implementation of QuickSort */
#include <bits/stdc++.h> 
using namespace std; 


void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{		
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		
		int pi = partition(arr, low, high); 

		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

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
	quickSort(arr, 0, n - 1);
    end = clock();
    tc = end - start;
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
    printf("\nThe time complexity of bubble sort is :%lf",tc); 
	
	 
	 
	return 0; 
} 

