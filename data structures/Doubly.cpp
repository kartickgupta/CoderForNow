#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* Head = NULL;

Node* NodeCreartion(int x){
    Node* newNode = new Node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x){
    Node* newNode = NodeCreartion(x);
    if(Head == NULL){
        Head = newNode;
        return;
    }
    Head->prev = newNode;
    newNode->next = Head;
    Head = newNode;
    return;
}

void InsertAtEnd(int x){
    Node* newNode = NodeCreartion(x);
    if(Head == NULL){
        InsertAtHead(x);
        return;
    }
    Node* temp = Head;
    while ( temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return;
}

void Print(){
    Node* temp = Head;
    cout<< "The list is:  ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main(){
    InsertAtHead(99); // 99
    Print();
    InsertAtEnd(110); // 99 110
    Print();    
    InsertAtHead(9); // 9 99 110
    Print();
    InsertAtEnd(70); // 9 99 110 7
    Print();
    InsertAtHead(8); // 8 9 99 110 7
    Print();
    InsertAtEnd(10); // 8 9 99 110 7 10
    Print();
    InsertAtHead(20); // 20 8 9 99 110 7 10
    Print(); 
}