// * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
#include<bits/stdc++.h>
using namespace std;

stack<long int> s;
long int LCM(long int a, long int b){
    int divident = (a > b)? a:b;
    int divisor = (a > b)? b:a;
    while(divisor != 0){
        int remainder = divident%divisor;
        divident = divisor;
        divisor = remainder;
    }
    return ((a*b)/divident);
}

long int commonLCM(int n){
    for(int i =1; i <=n;i++ ){
        s.push(i);
    }
    for(int i =1; i<=n-1; i++){
        long int a = s.top();
        s.pop();
        long int b = s.top();
        s.pop();
        s.push(LCM(a, b));
        cout << s.top() <<endl;
    }
    cout << s.empty() << endl;
    return s.top();
}

int main(){
    cout << commonLCM(20) << endl;
}