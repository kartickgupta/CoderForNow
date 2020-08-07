#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &A){		// O(n+k)
	int k = A[0];			
	for(auto i = A.begin(); i!=A.end(); i++){	// Calculating value of K
		if(*i > k)	k =*i;
	}
	vector<int> C(k, 0);						// Making the array Count of k elements with all 0's
	vector<int> B(A.size());					// Output Array
	for(int i = 0 ;i < A.size(); i++){
		++C[A[i]];								// Counting Frequencies of elements in Input array
	}											// Here input value is used as th index value
	for(int i=1; i<= C.size(); i++){			// Calculating no of elements occuring before postion i
		C[i]+= C[i-1]; 							// Or Calculating final postion of the value
	}
	for(int i = B.size()-1;i >= 0; i--){
		B[C[A[i]]-1] = A[i];					// Blacing the elemsnts from Input Array in Output array accoring to their position
		--C[A[i]];								// Decrementing so as to place a same value on left side ( if it Exits)
	}
	A= B;
}
void Print(vector<int> &A){						// Print Function
	for(auto i =A.begin(); i!= A.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
}
int main(){
	vector<int> A;
	srand(time(NULL));
	for(int i =0; i< 10; i++){
		A.push_back(rand()%1000);
	}
	
	cout << "Input Array : ";
	Print(A);
	countingSort(A);
	cout << "Output Sorted Array : ";
	Print(A);

}