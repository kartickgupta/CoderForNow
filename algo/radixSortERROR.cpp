#include<bits/stdc++.h>
using namespace std;

void Print(vector<int> &A){						// Print Function
	for(auto i =A.begin(); i!= A.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
}

void radixSort(vector<int> &A){	
	int k = A[0];			
	for(auto i = A.begin(); i!=A.end(); i++){	// Calculating largest value
		if(*i > k)	k =*i;
	}
	int d =0;
	while(k >0){								// calculation maximun no of didgts for d
		k = k/10;
		d++;
	}
	cout << d+1<< endl;
	vector<int> result;
	for(int j =0; j <d; j++)
	{
		vector<int> C(11, 0);						// Making the array Count of k elements with all 0's
		vector<int> B(A.size());					// Output Array
		for(int i = 0 ;i < A.size(); i++){
			int t = (int(A[i]/pow(10,j))%10);		// for taking ith value
			cout << t << " ";
			++C[t];									// Counting Frequencies of elements in Input array
		}
		cout << endl;
		Print(C);									// Here input value is used as th index value
		for(int i=1; i<= C.size(); i++){			// Calculating no of elements occuring before postion i
			C[i]+= C[i-1]; 							// Or Calculating final postion of the value
		}
		for(int i = B.size()-1;i >= 0; i--){
			int t = (int(A[i]/pow(10,j))%10);
			B[C[t]-1] = A[i];					// Blacing the elemsnts from Input Array in Output array accoring to their position
			--C[t];								// Decrementing so as to place a same value on left side ( if it Exits)
		}
		cout << "B : ";
		Print(B);
		cout << " Hello " << endl;
		result = A = B;
	}
	//return result;
}

int main(){
	vector<int> A;
	srand(time(NULL));
	for(int i =0; i< 10; i++){
		A.push_back(rand()%100);
	}
	cout << "Input Array : ";
	Print(A);
	radixSort(A);
	cout << "Output Sorted Array : ";
	Print(A);
	return 0;

}