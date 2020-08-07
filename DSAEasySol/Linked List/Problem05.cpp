#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int NthNodeFromLast(Node *head, int NthNode){
    Node* temp, *ntemp;
    temp = head;
    for(int i =0; i< NthNode; i++){
        if(temp)    temp = temp->next;
        else    return 0;        
    }
    ntemp = head;
    while(temp != NULL){
        temp = temp->next;
        ntemp = ntemp->next;
    }
    return ntemp->data;
}

void Print(Node* Head){
    Node* temp1 = Head;
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}


Node* insertAtBeg(Node* Head, int x){    
    Node* temp = new (Node);
    temp->data = x;
    temp->next = NULL;
    if(Head != NULL) temp->next = Head;
    Head = temp;
    return Head;
}

int main()
{
    Node* Head = NULL;
    int n =10, x =0, PostionOfNthNode;
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        x = rand()%100; 
        Head = insertAtBeg(Head, x);  
    }
    Print(Head);
    cin >> PostionOfNthNode;  
    cout << NthNodeFromLast(Head, PostionOfNthNode) << endl;
}
