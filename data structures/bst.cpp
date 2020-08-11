#include<bits/stdc++.h>
using namespace std;

struct bstNode{
    int data;
    bstNode* Left;
    bstNode* Right;
};

bstNode* getNode(int x){
    bstNode* temp = new bstNode;
    temp->data = x;
    temp->Left = NULL;
    temp->Right = NULL;
    return temp;

}


bstNode* Insert(bstNode* root, int value){
    if(root == NULL){
        root = getNode(value);
    }
    
    if( root->data >= value){
        Insert(root->Right, value);
    }

    if(root-> data <= value){
        Insert(root->Left, value);
    }
    return root;
}

bool Search(bstNode* root, int x){
    if(root->data == x){
        return true;
    }
    if(root->data >= x){
        Search(root->Right, x);
    }
    if(root->data <= x){
        Search(root->Left, x);
    }

}

int main(){
    bstNode* root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 20);
    if(Search(root,10)){
        cout << "10 is there !!!!\n";
        return 0;
    }
    cout << "Number DNE " << endl;
}