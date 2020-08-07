#include<bits/stdc++.h>
using namespace std;

int NoOfPairWithSumK(vector<int> &A, int k){
	int TwiceCount =0;
	map<int, int>m;
	for(int i: A){
		m[i]++;
	}
	for(int i: A){
		if(m.find(k-i) != m.end()){
			TwiceCount += m[k-i];
		}
		if(k-i == i)	TwiceCount--;
	}
	return TwiceCount/2;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		vector<int> A;
		for(int i =0; i< n; i++){
			int num;cin>>num;
			A.push_back(num);
		}
		NoOfPairWithSumK(A, k);
	}
}