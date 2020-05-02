//Stack implementation using Linked List
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
}; 

Node* Head = NULL;

void Push(int x){
    Node* temp = new Node;
    Node* temp1 = Head;
    temp->data = x;
    temp->next = NULL;
    if(Head == NULL){
        Head = temp;
        return;
    }
    while (temp1->next != NULL )
    {
       temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void Pop(){
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    Node* temp1;
    temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    
}

void Print(Node* Head){
    if(Head == NULL) return;

    cout << Head->data <<  " ";
    Print(Head->next);
    cout << endl;
}


int main(){
    Push(500);
    Print(Head);
    Push(10);
    Print(Head);
    Pop();
    Print(Head);


}