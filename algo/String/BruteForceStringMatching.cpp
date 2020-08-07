#include <bits/stdc++.h>
using namespace std;

int PatternSearch(string s, string sub){
	int n =s.length(), m = sub.length();
	for(int i=0; i< n; i++){
		int j =0; 
		while(j<m && s[i+j] == sub[j]){
			j= j+1;
		}
		if(j == m){
			return i;
		}
	}
	return -1;
}

int main(){
	cout<<"Input No of test case"<< endl;
	int t; cin>> t;
	while(t--){
		cout<<" Enter string and substring"<<endl;
		string s, sub;
		cin>> s>> sub;
		int result = PatternSearch(s, sub);
		(result == -1) ? cout<< " No such substring exits" : cout<< "Exists at index "<< result<< endl;
	}
}