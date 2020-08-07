
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* Merge2SortedLinkedList(Node* head1, Node* head2){
   Node* head3 = (head1->data >= head2->data)? head2 : head1;
    (head1->data >= head2->data)? head2 = head2->link : head1 = head1->link;
    Node* temp = head3;
    while( head1!= NULL && head2 != NULL){
        temp->link = (head1->data >= head2->data)? head2 : head1;
        (head1->data >= head2->data)? head2 = head2->link : head1 = head1->link;
        temp = temp->link;
    }
    while(head1 != NULL){
        temp->link = head1;
        head1 = head1->link;
        temp = temp->link;
    }
    while(head2 != NULL){
        temp->link = head2;
        head2 = head2->link;
        temp = temp->link;
    }   
    return head3;
}


void Print(Node* Head){
    Node* temp1 = Head;
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->link;
    }
    cout << endl;
}

// Inserting the Node at Begining
Node* insertAtBeg(Node* Head, int x){    
    Node* temp = new (Node);
    temp->data = x;
    temp->link = NULL;
    if(Head != NULL) temp->link = Head;
    Head = temp;
    return Head;
}

int main()
{   
    Node* Head1 = NULL, *Head2 = NULL;
    for(int i = 100; i > 0; i-= 10){
        int x = i;
        Head1 = insertAtBeg(Head1, x);
        
    }
    Print(Head1);
    for(int i = 60; i > 0; i-=10){
        int x = i; 
        Head2 = insertAtBeg(Head2, x);        
    }
    Print(Head2);  
    cout << "Merged Array "<<endl;
    Node* Head = Merge2SortedLinkedList(Head1, Head2);
    Print(Head);
}



