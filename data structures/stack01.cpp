//Stack implementation using using array
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101

int stacks[MAX_SIZE];
int TOP= -1;

bool isEmpty(){
<<<<<<< HEAD
    if(TOP == -1){
         return true;
        cout << "The Stack is Empty \n";
    }
=======
    if(TOP == -1) return true;
    cout << "The Stack is Empty \n";
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
    return false;
}

bool isFull(){
    if(TOP == MAX_SIZE){
<<<<<<< HEAD
        cout << "The Stack is Full \n";
        return true;
    }
    else{        
=======
        return true;
    }
    else{
        cout << "The Stack is Full \n";
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
        return false;
    }
}

void Push(int x){
    if(isFull())    return;
    TOP++;
    stacks[TOP] = x;
}

void Pop(){
    if(isEmpty()) return;
    TOP--;
}

void Print(){
    if(isEmpty())   return;
    for (int i = TOP; i > -1; i--){
        cout << stacks[i] << " ";
    }
    cout << endl;
}

void top(){
    cout << stacks[TOP] << endl;
}

int main(){
    Push(100);
    Print();
    Push(101);
    Push(102);
    Push(103);
    Push(105);
    Push(106);
    Push(107);
    Push(108);
    Print();
<<<<<<< HEAD
    Pop();
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Pop();
    Print();
=======
>>>>>>> 6b0e4cb65c5f4f8cb1ec09e85a47e24407d1fd0f
}