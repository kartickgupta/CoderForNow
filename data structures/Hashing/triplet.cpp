// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1

#include<bits/stdc++.h>
using namespace std;

bool findTriplets(int arr[], int n)
{   
    bool flag = false;
    sort(arr, arr+n);
    cout << "hello" << endl;
    for(int i=0; i<n-2; i++){
        
        if(i =0 ||(i>0 && arr[i] != arr[i-1] )) {
            int low =i+1;
            int high = n-1;
            int sum = 0- arr[i];
            
            while(low < high){
                if(arr[low] + arr[high]+sum == 0 ){
                    flag = true;
                    while(low < high  && arr[low ] == arr[low+1])  low++;
                    while(low < high  && arr[high] == arr[high -1] )   high--;
                    low++;
                    high--;
                }
                else if(arr[low] + arr[high] > sum)    high--;
                else if(arr[low] + arr[high] < sum)     low++;
                
            }
        }
    }
    return flag;
}

int main(){
    int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int arr[n];
		for(int i =0; i< n; i++){
			int num;cin>>num;
			arr[i] = num;
		}
		cout << findTriplets(arr, n)<< endl;
	}
}