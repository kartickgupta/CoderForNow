#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> m;
    string s; getline(cin, s);  // to input string
    for(char c: s)  m[c]++;     // to increment count and inserting characters

    int maxV = INT_MIN;
    char maxChar;
    for(auto i : m){
        if(i.second > maxV){
            maxChar = i.first;
            maxV = i.second;
        }
    }
    cout << maxChar << " "<< m[maxChar] << endl;
    
}