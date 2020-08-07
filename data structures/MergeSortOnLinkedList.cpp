// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include<bits/stdc++.h>
using namespace std;

struct  Node
{
    int data;
    Node* next;
};

Node* Insert(Node* Head, int pos, int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;    
    Node* temp1;
    temp1 = Head;      
    
    if(Head == NULL){
        
        Head = temp;
    }
    else
    {
        for(int i = 1; i < pos-1; i++){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;        
    }   
    return Head;   
}

// Print Using Recursion !!!!!!!!!!
void Print(Node* Head){
    if(Head == NULL)    return;
    cout << Head->data << " ";
    Print(Head->next);
}



Node* Merge(Node* A, Node* B){
    Node* List = NULL;
    if(A == NULL)   return B;
    if(B == NULL)   return A;
    if(A->data <= B->data){
        List = A;
        List->next = Merge(A->next, B);
    }
    else{
        List = B;
        List->next = Merge(A, B->next);
    }
    return List;
}

Node* MergeSort(Node* Head){
    if(Head == NULL || Head->next == NULL)    return Head;
    Node* slow, *fast;
    slow = fast = Head;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    slow = Head;
    Print(slow);
    cout<<endl;
    Print(fast);
    cout<<endl;
    Node* left = MergeSort(slow);
    Node* right = MergeSort(fast);
    return Merge(left, right);    
}


int main(){
    srand(time(NULL));
    Node* Head = NULL;
    int n, x;
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        x = rand()%100;
        Head = Insert(Head, i+1, x);
    }
    Print(Head);
    cout << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------"  <<endl;
    Head = MergeSort(Head);  
    Print(Head);
    cout << endl;
}