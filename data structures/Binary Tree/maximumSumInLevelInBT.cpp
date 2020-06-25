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

void BFS(bstNode* root){
    queue<bstNode*> q;
    q.push(root);
    int sum = 0, max = INT_MIN, level =1, maxLevel = 0;
    while(!q.empty()){
        bstNode* current = q.front();
        q.pop();
        sum += current->data;
        if(q.empty()){
            level++;
            if(max < sum){
                max =sum;
                sum = 0;
                maxLevel = level;
            }           
        }   
        if(current->left)  q.push(current->left);
        if(current->right)  q.push(current->right);
    }
    cout << "Maximum sum is at "<< maxLevel << " "<<max << endl;
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
    BFS(root); // 820
}
/*
The given tree:

            100
           /   \      
          10    110
          \       \
          60      120
                    \
                     700
                    /
                   400
                  /   \
                 320   500


*/