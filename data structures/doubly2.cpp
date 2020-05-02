#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* Head = NULL;

Node* MakeNode(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

int length(){
    int count = 0;
    Node* temp = Head;
    while (temp)                            // Iterate till temp == NULL 
    {
        count ++;
        temp = temp->next;                  // changing values of temp pointer
    }
    return count;
}

void InsetAtHead(int x){
    Node* temp = MakeNode(x);
    if(Head == NULL)
    {
        Head = temp;
        return;
    }   
    temp->next = Head;              // connecting temp and Head (insertion) , making Head point to 2nd node
    temp->next->prev = temp;        // connecting prev of 2nd node and first node
    Head = temp;                    // making Head point to 1st node
}

void insertAtMiddle(int x, int pos) {
    if(pos == 1){
        InsetAtHead(x);
        return;
    }
    Node* temp = MakeNode(x);
    int k = length();
    //cout << k << endl;
    if(k < pos){
        cout << "Following Postion DNE!!" << endl;
        return;
    }
    Node* temp1 = Head;
    for (int i = 0; i < pos-2; i++)  // Making temp2 point to n-1 th node
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;       // making link b/w our node (at nth positon) and n-1th 
    temp1->next->prev = temp;       
    temp1->next = temp;             
}


void Print(){
    Node* temp = Head;
    while (temp)                        // Iterate till temp == NULL 
    {                                  
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Delete(int pos){
    Node* temp = Head;
    int k = length();
    if(k < pos){
        cout << "Desird Position DNE";
        return;
    }
    if(pos == 1){
        Head = temp->next;              // Making Head point to 2nd Node
        Head->prev = NULL;              // Making link b/w prev of Head or 2nd node
        delete(temp);
        return;
    }
    Node* temp2;
    for(int i =0; i< pos -2 ; i++){
        temp= temp->next;               // Making temp to point to Nth Node
    }
    temp2 = temp->next;             // Making  temp1 point to nth Node
    temp->next = temp2->next;       // Making link b/w n-1 and n+1
    temp2->next->prev = temp;       // Linking n-1 with prev of n-2
    delete(temp2);
}

int main(){
    InsetAtHead(6);
    Print();
    InsetAtHead(69);
    Print();
    InsetAtHead(61);
    Print();
    InsetAtHead(633);
    Print();
    InsetAtHead(36);
    Print();
    InsetAtHead(16);
    Print();
    insertAtMiddle(12, 3);
    Print();
    for(int i =0; i <=8 ; i++){
        insertAtMiddle(i*i +1, i+2);
    }
    Print();
    Delete(1);
    Print();
    for(int i =2; i < 5 ; i++){
        Delete(i);
    }
    Print();
    Delete(10);
    Print();
}