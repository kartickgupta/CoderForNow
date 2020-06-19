#include<bits/stdc++.h>
using namespace std;

struct bstNode{
    int data;
    bstNode* right;
    bstNode* left;
};

bstNode* getNewNode(int x){
    bstNode* temp = new bstNode;
    temp->data = x;
    temp->right = temp->left = NULL;
    return temp;
}

bstNode* Insert(bstNode* root, int x){
    if(root == NULL)    root = getNewNode(x);
    else if(root->data > x) root->left = Insert(root->left, x);
    else if(root->data < x) root->right = Insert(root->right, x);
    return root; 
}
/*
int NoOfFullNodes(bstNode* root){
    if(root == NULL) return 0;
    if(root->left && root->right)   return 1;
    int left = NoOfFullNodes(root->left);
    int right = NoOfFullNodes(root->right);
    return right +left;
}
*/
void NoOfFullNodes(bstNode* root){
    queue<bstNode*> q;
    queue<int> q1;
    int count =0;
    q.push(root);
    while(!q.empty()){
        bstNode* current = q.front();
        if(current->left && current->right){
            q1.push(current->data);
            count++;
        }        
        if(current->left)  q.push(current->left);
        if(current->right)  q.push(current->right);
        q.pop();
    }
    cout << count << endl;
    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}


int main(){
    bstNode* root = NULL;
    root = Insert(root, 100);
    root = Insert(root, 110);
    root = Insert(root, 120);
    root = Insert(root, 10);
    root = Insert(root, 700);
    root = Insert(root, 400);
    root = Insert(root, 500);
    root = Insert(root, 60);
    root = Insert(root, 320);
    NoOfFullNodes(root);    
}