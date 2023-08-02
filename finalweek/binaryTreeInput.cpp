#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *left;
        Node *right;
    
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}; 

void insertBST(Node * & root, int x) {
    if(root == NULL) {
        root = new Node(x);
        return;
    }
    if(x < root->val) {
        if(root->left == NULL) {
            root->left = new Node(x);
        } else {
            insertBST(root->left, x);
        }
    } else {
        if(root->right == NULL) {
            root->right = new Node(x);
        } else {
            insertBST(root->right, x);
        }
    }
}

int main () {

    
    return 0;
}