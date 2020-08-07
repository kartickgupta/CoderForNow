// * Sum of all Muliples of 3 or 5 upto 1000
#include<bits/stdc++.h>
using namespace  std;

int main(){
    int a, count;
    for(int i=1; i < 1000; i++){
        if(i %3 == 0 or i%5 == 0){
            count+=i;
        }

    }
    cout << count << endl;
}

void method2(){
    int a;
    cin >> a;
    while(a--){
        long int b; cin>>b;
        long int c=b-1, d=b-1, e=0;
        if(b>15) e =b-1;
        long int count = 0;
        while(c%3 != 0 )    --c;
        while(d%5 != 0 )    --d;
        while(e%15 != 0)    --e;
        count = (3*c +c*c)/6 + (d*d + d*5)/10 - (e*e +15*e)/30;        
        cout<< count<< endl;
    }
}