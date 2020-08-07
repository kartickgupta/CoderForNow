#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};


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
Node* sortedMerge(Node* head1,   Node* head2)
{   
    if(head1 == NULL)   return head2;
    if(head2 == NULL)   return head1;
    Node* result;
    if(head1->data <= head2->data){
        result = head1;
        result->next = sortedMerge(head1->next, head2);
    }
    else{
        result = head2;
        result->next = sortedMerge(head1, head2->next);
    }
    return result;
}

Node* mergeSort(Node* Head){
    if(Head->next == NULL || Head == NULL)  return Head;
    Node* fast, *slow;
    slow = fast = Head;
    while(slow && fast->next->next && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* front = Head;
    Node* back= slow->next;
    slow->next = NULL;
    //cout << front->data << " " << back->data << endl;
    Node* l1 = mergeSort(front);
    Node* l2 = mergeSort(back);
    return sortedMerge(l1, l2);
}


int main()
{
    Node* Head = NULL;
    int n, x;
    srand(time(NULL));
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout<< "Input the Number: ";
        x = rand()%20; 
        Head = insertAtBeg(Head, x);
        Print(Head);
    }
    Head = mergeSort(Head);
    Print(Head);  

}
