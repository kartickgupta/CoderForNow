//Stack using Array !!!!
#include<bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;

int stacks[MAX_SIZE];
int TOP = -1;

void Push(int x){
    if(TOP == MAX_SIZE){
        cout << "Error: No space in Array \n";
        return;
    }
    stacks[++TOP] = x;
}

void Pop(){
    if(TOP == MAX_SIZE){
        cout << "Error: No space in Array \n";
        return;
    }
    TOP--;
}

void Print(){
    int temp = TOP;
    for(int i = temp; i >-1; i--){
        cout << stacks[i] << " ";
    }
    cout << endl;
}

int main(void){
    Push(500);
    Print();
    Push(400);
    Print();
    Push(100);
    Print();
    Push(300);
    Print();
    Push(450);
    Print();
    Push(200);
    Print();
    Push(700);
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Push(200);
    Print();
    Push(700);
    Print();
}