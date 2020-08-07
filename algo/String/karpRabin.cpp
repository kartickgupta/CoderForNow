#include<bits/stdc++.h>
using namespace std;

int Prime = 5;

int hash(string s){
    int q = s.length();
    int val =0;
    for(char c: s ){
        val = (val*Prime + c)%q;
    }
    return val;
}



int karpRabin(string text, string pattern){





}