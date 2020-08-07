#include<bits/stdc++.h>
using namespace std;

long int LargestPrime(long int a){
    long int i =2, prime;
    for (i; i <= sqrt(a); i++)
    {
        if(a%i == 0){
            while (a%i == 0)
            {
                a = a/i;                   
            }
            prime = i;  
        }
    }
    return prime;
    
}

int main(){
    long int a;
    cin >> a;
    cout << LargestPrime(a) << endl;
}