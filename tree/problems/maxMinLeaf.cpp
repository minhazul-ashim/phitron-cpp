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

class MaxMin {
    public:
        int max;
        int min;
    MaxMin() {
        this->max = -1;
        this->min = -1;
    }
};

Node * bTreeInput() {
    int val;
    cin >> val;
    Node *root;
    if(val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node *> q;
    if(root) {
        q.push(root);
    }
    while(!q.empty()) {
        Node * f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if(l == -1) {
            left = NULL;
        }
        else {
            left = new Node(l);
        }

        if(r == -1) {
            right = NULL;
        } else {
            right = new Node(r);
        }

        f->left = left;
        f->right = right;

        if(f->left) {
            q.push(f->left);
        }
        if(f->right) {
            q.push(f->right);
        }
    }
    return root;
}

void findMaxMin(Node * root, MaxMin * result) {
    if(!root) {
        return;
    }

    if(!root->left && !root->right) {

        if(result->max == -1 && result->min == -1) {
            result->max = root->val;
            result->min = root->val;
        }

        if(root->val > result->max) {
            result->max = root->val;
        }

        if(root->val < result->min) {
            result->min = root->val;
        }

        return;
    }

    findMaxMin(root->left, result);
    findMaxMin(root->right, result);
}

int main () {
    MaxMin *result = new MaxMin();
    Node *root = bTreeInput();
    findMaxMin(root, result);
    cout << result->max << " " << result->min << endl;
    return 0;
}