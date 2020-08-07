// SUm of Even Fibonacci NUmbers
#include<bits/stdc++.h>
using namespace std;

long int sumofEvenFibonacci(long int a){
    if(a == 1 || a == 0){
        return 1;
    }
    else{
        return sumofEvenFibonacci(a -1) + sumofEvenFibonacci(a -2);
    }
}

long int Method2(long int a){
    long int b, c, d =0, sum = 0;    
    b = 0;
    c = 1;
    while(d <= a){
        d = b+c;
        if(d%2 == 0){
            sum += d;
        }
        b = c;
        c = d;
    }
    return sum;
}

int main(){    
    long int num, i =0, sum =0;
    bool flag =true;
    while(flag){
        num = sumofEvenFibonacci(i);
        if(num <= 4000000){
            if(num%2 == 0){
                sum+= num;
            }
        }
        else{
            flag = false;
        }
        i++;
    }
    cout << sum << endl;

    cout << Method2(4000000) << endl;

}