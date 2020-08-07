/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int Partition(vector<int> &arr, int p, int q){
	int less, high,key;
	less = p-1;
	high = p;
	key = arr.at(q);
	for(high; high < q; high++){
		if(arr[high] < key){
			less++;
			swap(arr.at(less), arr.at(high));
		}
	}
	swap(arr.at(less +1), arr.at(key));
	return less +1;
}
void quickSort(vector<int> &arr, int p, int q){
	if (p < q){
		int r = Partition(arr, p ,q);
		cout << r << " " << endl;
		quickSort(arr, p, r-1);
		quickSort(arr, r+1, q);
	}
}

int main(){
	vector<int> arr;
	srand(time(NULL));
	for(int i=0; i <10; i++){
		arr.push_back(rand()%50);
		cout << arr.at(i) << " ";
	}
	cout << endl;
    cout << arr.at(arr.size()-1);
	/*
    quickSort(arr, 0, 9);
	for(auto i = arr.begin(); i!= arr.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
    */
}