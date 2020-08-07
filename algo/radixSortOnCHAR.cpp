#include<bits/stdc++.h>
using namespace std;

void Print(vector<string> &A){						    // Print Function
	for(auto i =A.begin(); i!= A.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
}

void radixSort(vector<string> &A){		        // O(d(n+k))
	int k = 0;			
	for(auto i = A.begin(); i!=A.end(); i++){	    // Calculating largest value
		if((*i).length() > k)	k =(*i).length();
	}
	vector<string> result;
	for(int j =0; j <k; j++)
	{
		vector<int> C(10, 0);						// Making the array Count of k elements with all 0's
		vector<string> B(A.size());					// Output Array
		for(int i = 0 ;i < A.size(); i++){
			int t = (int(A[i][A[i].length()-k-1]));
			++C[t];								    // Counting Frequencies of elements in Input array
		}										    // Here input value is used as th index value
		for(int i=1; i<= C.size(); i++){			// Calculating no of elements occuring before postion i
			C[i]+= C[i-1]; 							// Or Calculating final postion of the value
		}
		for(int i = B.size()-1;i >= 0; i--){
			int t = (int(A[i][A[i].length()-k-1]));
			B[C[t]-1] = A[i];					    // Blacing the elemsnts from Input Array in Output array accoring to their position
			--C[t];								    // Decrementing so as to place a same value on left side ( if it Exits)
		}
		result = A = B;
	}
}

int main(){
	vector<string> A;
	A.push_back("HEN");
    A.push_back("TOM");
    A.push_back("CAT");
    A.push_back("BAT");
    A.push_back("HAT");
    A.push_back("EAT");
    A.push_back("CRY");
	
	cout << "Input Array : ";
	Print(A);
	radixSort(A);
	cout << "Output Sorted Array : ";
	Print(A);

}