#include<bits/stdc++.h>
using namespace std;

void print(const vector<int>& vect);
int main()
{   
    vector<int> v1(6);
    for(int i =0; i < v1.size(); ++i)
    {
        v1[i] = (i*2);
    }
    
    for(int i=0; i < v1.size(); ++i)
    {
        cout << v1[i] << " ";
    }
    
    vector<int> v2(10);
    for (int i = 0; i < v2.size();  ++i)
    {
       // v2.push_back(i +2); 
    }
    
    for (int i = 0; i < v2.size();  ++i)
    {
        cout << v2.at(i) << " ";
    }
    
    vector<int> v3;
    v3 = v1;
    print(v3);
    
}

void print(const vector<int>& vect){
    for (int i = 0; i < vect.size();  ++i)
    {
        cout << vect.at(i) << " ";
    }
    
}